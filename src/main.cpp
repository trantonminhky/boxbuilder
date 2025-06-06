#include "builder.hpp"
#include "director.hpp"

int main() {
	BoxBuilder builder;
	builder.setType(Type::INFO)
	.setThickBorder(true)
	.setTitle("\'TIS A BOX")
	.setBullet('*')
	.addLine("This is a dialog box.")
	.addLine("Created using builder.");

	Box box = builder.getBox();
	box.display();

	std::cout << std::endl;

	Director director(&builder);
	director.buildErrorBox("Syntax Error");

	Box errorBox = builder.getBox();
	errorBox.display();
	
	return 0;
}