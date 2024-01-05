#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include <stdint.h>
#include "Data.hpp"

class  Serialize{
	public :
	uintptr_t serialize(Data* ptr);
};
#endif