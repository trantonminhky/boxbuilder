#pragma once
#include "builder.hpp"

class Director {
public:
	Director(Builder* builder);

	void buildInfoBox(std::string line);
	void buildWarningBox(std::string line);
	void buildErrorBox(std::string line);

private:
	Builder* builder;
};