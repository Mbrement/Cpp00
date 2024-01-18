#include "Array.hpp"

int main(void)
{

	Array<int> arrA(3);

	for (size_t i = 0; i < arrA.size(); i++)
		std::cout << arrA[i] << ' ';
	std::cout << std::endl << std::endl;

	arrA[0] = 42;
	arrA[1] = 101;
	arrA[2] = 21;

	for (size_t i = 0; i < arrA.size(); i++)
		std::cout << arrA[i] << ' ';
	std::cout << std::endl << std::endl;

	Array<int> arrB(arrA);

	for (size_t i = 0; i < arrA.size(); i++)
		std::cout << arrA[i] << ' ';
	std::cout << std::endl;
	for (size_t i = 0; i < arrB.size(); i++)
		std::cout << arrB[i] << ' ';
	std::cout << std::endl << std::endl;

	arrA[0] = 12;
	arrB[2] = 89;

	for (size_t i = 0; i < arrA.size(); i++)
		std::cout << arrA[i] << ' ';
	std::cout << std::endl;
	for (size_t i = 0; i < arrB.size(); i++)
		std::cout << arrB[i] << ' ';
	std::cout << std::endl << std::endl;

	try
	{
		arrB[2] = 0;
		std::cout << arrB[2] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		arrB[8] = 0;
		std::cout << arrB[8] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
