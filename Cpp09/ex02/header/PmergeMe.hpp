#ifndef PMERGEME_HPP
#define  PMERGEME_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>
#include <ctime>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
 

class PmergeMe
{
public :
	PmergeMe (const PmergeMe &PmergeMe);
	PmergeMe (const char** argv);
	~PmergeMe();
	PmergeMe	&operator=(const PmergeMe &PmergeMe);
	void printVector ();
	void printDeque ();
	void sortVec();
	void sortDeque();
private :
	PmergeMe();
	class InvalidArgument : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "invalid argument";
		}
	};
	std::vector<unsigned int> _vec;
	std::deque<unsigned int> _deq;
	void parsing(const char **argv);
	void sort(std::vector<unsigned int> &vec);
	void sort(std::deque<unsigned int> &deq);
	size_t jacobsthal(size_t n);
};

#endif