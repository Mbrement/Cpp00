#include "RPN.hpp"

void RPN::run(char **argv)
{

	std::stack<int> RPN;
	std::string	str;
	int tmp;

	std::string parsed;
	std::stringstream input_stringstream(argv[0]);
	while (getline(input_stringstream, parsed, ' ')) //exec
	{
		str = parsed;
		if (str.size() != 1)
		{
			std::cout << "Error : Argument too long : '" << str << "'" << std::endl;
			return ;
		}
		if (std::isdigit(str.c_str()[0]))
			RPN.push(std::atoi(parsed.c_str()));
		else if (str == "*")
		{
			if (RPN.size() < 2)
			{
				std::cout << "Error : incorrect argument here : '" << str << "'" << std::endl;
				return ;
			}
			tmp = RPN.top();
			RPN.pop();
			RPN.top() = RPN.top() * tmp;
		}
		else if (str == "/")
		{
			if (RPN.size() < 2)
			{
				std::cout << "Error : incorrect argument here : '" << str << "'" << std::endl;
				return ;
			}
			tmp = RPN.top();
			if (tmp == 0)
			{
				std::cout << "Error : division by 0" << std::endl;
				return ;
			}
			RPN.pop();
			RPN.top() = RPN.top() / tmp;
		}
		else if (str == "-")
		{
			if (RPN.size() < 2)
			{
				std::cout << "Error : incorrect argument here : '" << str << "'" << std::endl;
				return ;
			}
			tmp = RPN.top();
			RPN.pop();
			RPN.top() = RPN.top() - tmp;
		}
		else if (str == "+")
		{
			if (RPN.size() < 2)
			{
				std::cout << "Error : incorrect argument here : '" << str << "'" << std::endl;
				return ;
			}
			tmp = RPN.top();
			RPN.pop();
			RPN.top() = RPN.top() + tmp;
		}
		else
		{
			std::cout << "Error : Argument invalid : '" << str << "'" << std::endl;
			return ;
		}
	
	}
	if (RPN.size() != 1)
	{
		std::cout << "Error : Not enouth operator" << std::endl;
		return ;
	}
	std::cout << "result : " << RPN.top() << std::endl;
}


	RPN::RPN(){

	}

	RPN::RPN(const RPN& copy){
		(void)copy;
	}

	RPN::~RPN(){

	}

	RPN&	RPN::operator=(const RPN& copy){
		(void)copy;
		return *this;
	}
