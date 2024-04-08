#ifndef BITCOINEXCHANGE_HPP
#define  BITCOINEXCHANGE_HPP
#include <fstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <string>
#include <sstream>

class BitcoinExchange {
public:
	BitcoinExchange(std::string data);
	~BitcoinExchange();

	class CreateExept : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Couldn't create the class";
		}
	};

	class FormatExept : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Wrong format in line";
		}
	};

	void	run();

private:
	BitcoinExchange(const BitcoinExchange& BitcoinExchange);
	BitcoinExchange();
	BitcoinExchange& operator=(const BitcoinExchange& BitcoinExchange);
	
	std::fstream _data;
	std::string _str;
	std::map<std::string, float> _map;
};

#endif