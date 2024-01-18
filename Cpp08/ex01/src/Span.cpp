#include "Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(unsigned int n)
{
	_size = n;
}

Span::Span( const Span& old ) {
    *this = old;
}

Span& Span::operator=( Span const &cpy ) {
        _size = cpy._size;
        _list = cpy._list;
    return *this;
}

unsigned int	Span::shortestSpan()
{
	unsigned int idx = 0;
	unsigned int rtnVal = -1;
	unsigned int tmp;
	unsigned int tmp2;

	std::list<int>::iterator list_front = _list.begin();

	if (_list.size() < 2)
		throw notEnouthNumber();
	_list.sort();
	while (idx  < _size)
	{
		tmp =*list_front;
		list_front++;
		tmp2 = *list_front;
		tmp = tmp2 - tmp;
		if (tmp < rtnVal)
			rtnVal = tmp;
		idx++;
	}
	return rtnVal;
}

unsigned int	Span::longestSpan()
{
	if (_list.size() < 2)
		throw notEnouthNumber();
	_list.sort();
	return _list.back() -_list.front();	
}

void	Span::addNumber(int i)
{
	if (_list.size() <  _size)
		_list.push_back(i);
	else
		throw outOfRange();
}
