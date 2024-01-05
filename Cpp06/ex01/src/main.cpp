#include "Deserialize.hpp"
#include "Serialize.hpp"
#include "Data.hpp"
#include <iostream>


int	main(void)
{
	Data test;

	Serialize ser;
	std::cout <<  ser.serialize(&test) << std::endl;
	// Deserialize deser;
	// std::cout << deser.deserialize(ser.serialize(&test)) << std::endl;
	return 0;
}
