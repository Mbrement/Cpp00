#include "Serialize.hpp"
#include <iostream>


int	main(void)
{
	Data test;

	test.i = 1;
	std::cout <<  test.i << std::endl;
	std::cout <<  Serialize::serialize(&test) << std::endl;
	std::cout << Serialize::deserialize(Serialize::serialize(&test))->i << std::endl;
	return 0;
}
