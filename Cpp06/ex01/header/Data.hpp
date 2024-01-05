#ifndef DATA_HPP
#define DATA_HPP
#include <stdint.h>

class Data {
	public :
	Data();
    Data &operator=(Data &other);
	~Data();
	int getI();
	private : 
	int _i;
};
#endif