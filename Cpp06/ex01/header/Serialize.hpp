#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
#include <stdint.h>

struct Data{
	int i;
};
class  Serialize{
	public :
	static uintptr_t serialize(Data* ptr);
	static Data *deserialize(uintptr_t raw);
	private :
	Serialize();
	Serialize (const Serialize &Serialize);
	~Serialize();
	Serialize	&operator=(const Serialize &Serialize); 
};
#endif