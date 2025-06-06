#include "box.hpp"

Box::Box() {
	type = Type::NONE;
	title = "";
	lines = {};
	bullet = '-';
	thick = false;
}

Type Box::getType() {
	return type;
}

std::string Box::getTitle() {
	return title;
}

std::vector<std::string> Box::getLines() {
	return lines;
}

char Box::getBullet() {
	return bullet;
}

bool Box::isThickBorder() {
	return thick;
}

Box Box::setType(Type type) {
	this->type = type;
	return *this;
}

Box Box::setTitle(std::string line) {
	if (line.length() > 40) return *this;
	this->title = line;
	return *this;
}

Box Box::addLine(std::string line) {
	if (line.length() > 30) return *this;
	this->lines.push_back(line);
	return *this;
}

Box Box::setBullet(char c) {
	this->bullet = c;
	return *this;
}

Box Box::setThickBorder(bool value) {
	this->thick = value;
	return *this;
}

void Box::displayTitle(std::string line) {
	if (!thick) {
		std::cout << "+----------------------------------------+\n";
	} else {
		std::cout << "+========================================+\n";
	}
	int leftPadding = (40 - line.length()) / 2;

	std::cout << "|";
	for (int _ = 0; _ < leftPadding; _++) {
		std::cout << ' ';
	}
	std::cout << title;
	for (int _ = leftPadding + line.length(); _ < 40; _++) {
		std::cout << ' ';
	}
	std::cout << "|\n";

	if (!thick) {
		std::cout << "+----------------------------------------+\n";
	} else {
		std::cout << "+========================================+\n";
	}
}

void Box::displayLine(std::string line) {
	std::cout << "|";
	std::cout << " " << bullet << " ";
	std::cout << line;
	for (int _ = line.length() + 3; _ < 40; _++) {
		std::cout << ' ';
	}
	std::cout << "|\n";
}

void Box::displayBottom() {
	if (!thick) {
		std::cout << "+----------------------------------------+\n";
	} else {
		std::cout << "+========================================+\n";
	}
}

void Box::display() {
	displayTitle(title);
	for (auto line : lines) {
		displayLine(line);
	}
	displayBottom();
}