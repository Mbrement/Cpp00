#include "Deserialize.hpp"
#include "Data.hpp"

Data *Deserialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *> (raw));
}