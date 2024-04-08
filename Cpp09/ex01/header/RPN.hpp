#ifndef RPN_HPP
#define  RPN_HPP
#include <iostream>
#include <algorithm>
#include <stack>
#include <sstream>

class RPN
{
private:
	RPN();
	RPN(const RPN& other);
	~RPN();
	RPN&	operator=(const RPN& rightValue);
public :
	static void run (char **argv);

};

#endif