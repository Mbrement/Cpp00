#include "../header/ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>
	
char ScalarConverter::getchr()
{
	return (_chr);
}

double ScalarConverter::getd()
{
	return (_d);
}

int ScalarConverter::geti()
{
	return (_i);
}

float ScalarConverter::getf()
{
	return (_f);
}

std::ostream& operator<<(std::ostream& out, ScalarConverter& a)
{
	if (std::isprint(a.getchr()))
		std::cout << "char : " << a.getchr() << std::endl;
	else 
		std::cout << "char : Non displayable" << std::endl;;
	std::cout << "double : " << a.getd() << std::endl;
	std::cout << "int : " << a.geti() << std::endl;
	std::cout << "float : " << a.getf() << std::endl;
	return(out);
}

void	ScalarConverter::convert(std::string str)
{
	if (str.empty())
	{
		std::cout << "no input" << std::endl;
		return;
	}
	if (str == "nan")
	{
		std::cout << "char : impossible"<< std::endl;
		std::cout << "int : imposible"<< std::endl;
		std::cout << "float : nanf"<< std::endl;
		std::cout << "double : nan"<< std::endl;
		return ;
	}
	else if (str == "+inff")
	{
		std::cout << "char : non displayable"<< std::endl;
		std::cout << "int : imposible"<< std::endl;
		std::cout << "float : inff"<< std::endl;
		std::cout << "double : imposible"<< std::endl;
		return ;
	}
	else if (str == "-inff")
	{
		std::cout << "char : non displayable"<< std::endl;
		std::cout << "int : imposible"<< std::endl;
		std::cout << "float : -inff"<< std::endl;
		std::cout << "double : imposible"<< std::endl;
		return ;
	}
	else if (str.length() == 1 && !std::isdigit(str.c_str()[0]))
	{
		_chr = str.c_str()[0];
		_f = static_cast<float>(_chr);
		_i = static_cast<int>(_chr);
		_d = static_cast<double>(_chr);
		std::cout <<*this;
		return ;
	}
	size_t i= 0; 
	int j = 0;
	while (str.c_str()[i])
	{
		if (str.c_str()[i] == '.')
		{
			j++;
			if (j > 1 )
			{
				std::cout << "Wrong argument"<< std::endl;
				return ;
			}
		}
		if (std::isdigit(str.c_str()[i]) || (i == 0 && str.c_str()[i] == '-') || (i == str.length() - 1 && str.c_str()[i] == 'f')|| str.c_str()[i] == '.')
			i++;
		else 
		{
			std::cout << "Wrong argument" << std::endl;
			return ;
		}

		if (i == str.length() && j == 1)
		{
	
			if (str[str.length() - 1] == 'f' && str.length() > 4)
			{
				_f = std::atof(str.c_str());
				_i = static_cast<int>(_f);
				_chr = static_cast<char>(_f);
				_d = static_cast<double>(_f);
			}
			else 
			{
				_d = std::atof(str.c_str());
				_i = static_cast<int>(_d);
				_chr = static_cast<char>(_d);
				_f = static_cast<float>(_d);
			}
			std::cout << *this;
		}
		else if (i == str.length() && j == 0)
		{
			_i = std::atof(str.c_str());
			_f = static_cast<int>(_i);
			_chr = static_cast<char>(_i);
			_d = static_cast<double>(_i);
			std::cout << *this;
		}
	}
	return;
}

