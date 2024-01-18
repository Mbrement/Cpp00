#ifndef SPAN_HPP
#define  SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <list>

class Span
{
public :
	Span(unsigned int N);
	~Span();

	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void addNumber(int i);

	class outOfRange : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Out of range";
		}
	};

	class notEnouthNumber : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Not enouth number";
		}
	};

private:
	unsigned int _size;
	std::list<int>  _list;

	Span();
	Span(const Span& other);
	Span& operator=(const Span& other);

};

#endif