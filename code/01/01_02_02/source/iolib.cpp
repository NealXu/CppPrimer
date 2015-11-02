#include <iostream>
#include "iolib.h"

int main()
{
	int a, b;

	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> a >> b;
	std::cout << "The sum of " << a << " and " << b << " is " << (a + b) << std::endl;

	return 0;
}