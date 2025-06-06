#pragma once
#include "box.hpp"
#include "memory"

class Builder {
public:
	virtual void reset() = 0;
	virtual Builder& setType(Type type) = 0;
	virtual Builder& setTitle(std::string line) = 0;
	virtual Builder& setBullet(char c) = 0;
	virtual Builder& setThickBorder(bool value) = 0;
	virtual Builder& addLine(std::string line) = 0;
};

class BoxBuilder : public Builder {
public:
	BoxBuilder();

	void reset() override;
	BoxBuilder& setType(Type type) override;
	BoxBuilder& setTitle(std::string line) override;
	BoxBuilder& setBullet(char c) override;
	BoxBuilder& setThickBorder(bool value) override;
	BoxBuilder& addLine(std::string line) override;
	Box getBox();

private:
	std::unique_ptr<Box> box;
};