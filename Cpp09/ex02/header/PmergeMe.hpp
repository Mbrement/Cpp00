#ifndef PmergeMe_HPP
#define  PmergeMe_HPP
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
	void parsing(const char **argv);
	std::vector<unsigned int> _vec;
	std::vector<void *> _vecSort;
	std::deque<unsigned int> _deq;
	void sort(std::vector<unsigned int> &vec);
	void mergeInsert(std::vector<unsigned int> &vec,std::vector<unsigned int> &main,std::vector<unsigned int> &pend);
	void sort(std::deque<unsigned int> &deq);
	void mergeInsert(std::deque<unsigned int> &deq,std::deque<unsigned int> &main,std::deque<unsigned int> &pend);
	void sort(std::pair<unsigned int, unsigned int> &org, size_t size);


	void sort(std::pair<unsigned int, unsigned int> *org, size_t size);
	void sort(std::pair<void *, void *> *org, size_t size, size_t depth);
	size_t readData(std::pair<void *, void *> *data, size_t depth);
	size_t readData(std::pair<void *, void *> *data, size_t depth, size_t second);


	void mergeInsert(std::pair<void *, void *> *pairs, size_t size, size_t depth);
	void mergeInsert(std::pair<void *, void *> *pairs, size_t size, size_t depth, size_t rest);
	void mergeInsert(std::pair<unsigned int, unsigned int> *pairs);




	// template <typename T>
// size_t PmergeMe::readData(std::pair<T, T> *data, size_t depth){


	// std::pair<T,T> *tmpData;
	// T tmp;
	// tmpData = &data;
	// std::pair<unsigned int, unsigned int>rtn;
	// while (depth){
	// 	readData(tmp, depth--); 
	// }
	// return (rtn.first);
	// }


};

#endif