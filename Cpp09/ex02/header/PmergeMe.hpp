#ifndef PmergeMe_HPP
#define  PmergeMe_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>
#include <ctime>
#include <math.h>


class PmergeMe
{
	public :
	PmergeMe (const PmergeMe &PmergeMe);
	PmergeMe (const char** argv);
	~PmergeMe();
	PmergeMe	&operator=(const PmergeMe &PmergeMe);
	void sort ();
	void printVector ();
	void printDeque ();
	private :
	size_t _time;
	void sortVec();
	void sortDeque();
	size_t  Jacobsthal(size_t count);
	PmergeMe();
	class InvalidArgument : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "invalid argument";
		}
	};
	void parsing(const char **argv);
	std::vector<unsigned int> _vec;
	std::deque<unsigned int> _deq;

};

#endif