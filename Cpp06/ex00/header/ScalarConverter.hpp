#ifndef SCALARCONVERTER_HPP
#define  SCALARCONVERTER_HPP

#include <iostream>
#include <string>

class ScalarConverter
{

public :
/*cannonical form*/
	ScalarConverter();
	ScalarConverter (const ScalarConverter &ScalarConverter);
	~ScalarConverter();
	ScalarConverter	&operator=(const ScalarConverter &ScalarConverter);
/*cannonical form*/
	void convert(std::string str);
	char	chr;
	int		i;
	float	f;
	double	d;
};

std::ostream& operator<<(std::ostream& out, const ScalarConverter& a);
#endif