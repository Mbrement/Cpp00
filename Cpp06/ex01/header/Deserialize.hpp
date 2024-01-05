#ifndef DESERIALIZE_HPP
#define DESERIALIZE_HPP
#include <stdint.h>
#include "Serialize.hpp"

class  Deserialize{
	public :
	Data* deserialize(uintptr_t raw);
};
#endif