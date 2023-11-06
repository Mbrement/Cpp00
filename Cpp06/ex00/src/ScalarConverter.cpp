#include "../header/ScalarConverter.hpp"
#include <cstdlib>
	
	
ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter (const ScalarConverter &	ScalarConverter)
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &ScalarConverter)
{

}



void	ScalarConverter::convert(std::string str)
{
	if (str[str.max_size() + 1] == f && str.max_size() != 2)
		f = std::atof(str.c_str());
	i = std::atoi(str.c_str());
	chr = i;
	d = std::atof(str.c_str());

}

std::ostream& operator<<(std::ostream& out, const ScalarConverter& a)
{
	std::cout << "char : " << a.chr << std::endl;
	std::cout << "double : " << a.d << std::endl;
	std::cout << "int : " << a.i << std::endl;
	std::cout << "float : " << a.f << std::endl;
	return(out);
}