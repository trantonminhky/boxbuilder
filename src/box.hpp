#pragma once
#include "type.hpp"
#include <string>
#include <vector>
#include <iostream>

class Box {
public:
	Box();

	Type getType();
	std::string getTitle();
	std::vector<std::string> getLines();
	char getBullet();
	bool isThickBorder();

	Box setType(Type type);
	Box setTitle(std::string line);
	Box addLine(std::string line);
	Box setBullet(char c);
	Box setThickBorder(bool value);

	void display();

private:
	Type type;
	std::string title; // title cannot be longer than 40 char
	std::vector<std::string> lines; // each line cannot be longer than 30 char
	char bullet;
	bool thick;

	void displayTitle(std::string line);
	void displayLine(std::string line);
	void displayBottom();
};