#include "RPN.hpp"

void RPN::run(char **argv)
{

	std::stack<int> RPN;
	size_t	i;
	std::string		str;
	int tmp;

	i = -1;
	std::string parsed;
	// std::string input = ;
	std::stringstream input_stringstream(argv[0]);
	while(getline(input_stringstream, parsed, ' ')) //exec
	{
		str=parsed;
		if (str.size() != 1)
		{
			std::cout << "Error : Argument too long : '" << str << "'" <<std::endl;
			return ;
		}
		if (std::isdigit(str.c_str()[0]))
			RPN.push(std::atoi(parsed.c_str()));
		else if (str == "*")
		{
			if (RPN.size() < 2)
			{
				std::cout << "Error : incorrect argument here : '" << str << "'" <<std::endl;
				return ;
			}
			tmp = RPN.top();
			RPN.pop();
			RPN.top()= RPN.top() * tmp;
		}
		else if (str == "/")
		{
			if (RPN.size() < 2)
			{
				std::cout << "Error : incorrect argument here : '" << str << "'" <<std::endl;
				return ;
			}
			tmp = RPN.top();
			if (tmp == 0)
			{
				std::cout << "Error : division by 0" <<std::endl;
				return ;
			}
			RPN.pop();
			RPN.top()= RPN.top() / tmp;
		}
		else if (str == "-")
		{
			if (RPN.size() < 2)
			{
				std::cout << "Error : incorrect argument here : '" << str << "'" <<std::endl;
				return ;
			}
			tmp = RPN.top();
			RPN.pop();
			RPN.top()= RPN.top() - tmp;
		}
		else if (str == "+")
		{
			if (RPN.size() < 2)
			{
				std::cout << "Error : incorrect argument here : '" << str << "'" <<std::endl;
				return ;
			}
			tmp = RPN.top();
			RPN.pop();
			RPN.top()= RPN.top() + tmp;
		}
		else
		{
			std::cout << "Error : Argument invalid : '" << str << "'" <<std::endl;
			return ;
		}
	
	}
	if (RPN.size() != 1)
	{
		std::cout << "Error : Not enouth operator" <<std::endl;
		return ;
	}
	//display
	std::cout << "result : " << RPN.top() << std::endl;
	// std::cout << result << std::endl;
}
