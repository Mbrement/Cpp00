#include "Data.hpp"

Data::Data()
{
	this->_i = 1;
}

Data &Data::operator=(Data &other)
{
	this->_i = other.getI();
	return *this;
}

Data::~Data()
{
}

int Data::getI()
{
	return _i;
}