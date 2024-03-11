#ifndef SCALARCONVERTER_HPP
#define  SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <climits>

class ScalarConverter
{

public :
	static void convert(std::string str);
private:
	ScalarConverter();
	ScalarConverter (const ScalarConverter &ScalarConverter);
	~ScalarConverter();
	ScalarConverter	&operator=(const ScalarConverter &ScalarConverter); 
};

#endif