#ifndef SCALARCONVERTER_HPP
#define  SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{

public :
	void convert(std::string str);
	char 	getchr();
	double 	getd();
	int 	geti();
	float 	getf();
private:
	char	_chr;
	int		_i;
	float	_f;
	double	_d;
};

std::ostream& operator<<(std::ostream& out, const ScalarConverter& a);
#endif