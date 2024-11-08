#include "DynamicArr.h"

void fun()
{

	DynamicArr<double> arr1, arr2(3, 1);
	DynamicArr<double> arr3(arr1);

	for (size_t i = 0; i < 3; ++i)
	{
		arr3.push_back(static_cast<double>(i));
	}

	for (size_t i = 0; i < arr3.size(); ++i)
	{
		std::cout << arr3[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "arr3.capacity() = " << arr3.capacity() << std::endl;

	for (size_t i = 0; i < arr2.size(); ++i)
	{
		std::cout << arr2[i] << " ";
	}
}