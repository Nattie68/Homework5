#include <iostream>
#include "DynamicArr.h"

int main()
{
	DynamicArr<std::string> d(4, "lol");
	std::cout << d << std::endl;

	DynamicArr<std::string> dyn(std::move(d));
	std::cout << d << std::endl
			  << dyn << std::endl;

	DynamicArr<std::string> another_dyn = std::move(dyn);
	std::cout << dyn << std::endl
			  << another_dyn << std::endl;

	// fun();
	return 0;
}