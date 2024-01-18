#ifndef PmergeMe_HPP
#define  PmergeMe_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>


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
	std::vector<int> _vec;
	std::deque<int> _deq;

};

#endif