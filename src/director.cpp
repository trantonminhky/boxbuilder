#include "director.hpp"

Director::Director(Builder* builder) {
	this->builder = builder;
}

void Director::buildInfoBox(std::string line) {
	builder->reset();
	builder->setType(Type::INFO)
	.setBullet('*')
	.setTitle("INFO")
	.addLine(line);
}

void Director::buildWarningBox(std::string line) {
	builder->reset();
	builder->setType(Type::WARNING)
	.setBullet('?')
	.setTitle("WARNING")
	.addLine(line);
}

void Director::buildErrorBox(std::string line) {
	builder->reset();
	builder->setType(Type::ERROR)
	.setBullet('!')
	.setTitle("ERROR")
	.addLine(line);
}