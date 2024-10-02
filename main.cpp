#include <iostream>
#include "DynamicArr.h"

int main()
{
    DynamicArr arr1, arr2(3, 5);
    DynamicArr arr3(arr1);

    for (size_t i = 0; i < 3; ++i)
    {
        arr3.push_back(i);
    }

    std::cout << arr3[0] << std::endl;
    arr1 = arr3;
    std::cout << arr1[0] << std::endl;
    arr1[0] = 1.6;
    std::cout << arr1[0] << std::endl;

    return 0;
}