#include "Serialize.hpp"

uintptr_t Serialize::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t> (ptr));
}

Data *Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *> (raw));
}

Serialize::Serialize()
{

}

Serialize::Serialize (const Serialize &Serialize)
{
	*this = Serialize;
}

Serialize::~Serialize()
{
	
}

Serialize &Serialize::operator=(const Serialize &Serialize)
{
	(void)Serialize;
	return *this;
}