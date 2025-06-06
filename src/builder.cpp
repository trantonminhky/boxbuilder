#include "builder.hpp"

BoxBuilder::BoxBuilder() {
	this->reset();
}

void BoxBuilder::reset() {
	this->box = std::make_unique<Box>();
}

BoxBuilder& BoxBuilder::setType(Type type) {
	box->setType(type);
	return *this;
}

BoxBuilder& BoxBuilder::setTitle(std::string line) {
	box->setTitle(line);
	return *this;
}

BoxBuilder& BoxBuilder::setBullet(char c) {
	box->setBullet(c);
	return *this;
}

BoxBuilder& BoxBuilder::setThickBorder(bool value) {
	box->setThickBorder(value);
	return *this;
}

BoxBuilder& BoxBuilder::addLine(std::string line) {
	box->addLine(line);
	return *this;
}

Box BoxBuilder::getBox() {
	Box result = *box;
	this->reset();
	return result;
}