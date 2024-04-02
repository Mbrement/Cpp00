#include "../header/PmergeMe.hpp"
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>



size_t  PmergeMe::Jacobsthal(size_t count){
	size_t rtn = 0;

	for (size_t i = 0; i <= count; i++)
		rtn = std::pow(2, i) - rtn;
	return rtn;
}

void PmergeMe::sortVec(std::vector<unsigned int> &vec){
	if (vec.size() == 0)
		return;
	std::pair<unsigned int, unsigned int> pair[vec.size()/2];
	size_t i = 0;
	std::vector<unsigned int> tmp;
	for (; i < vec.size(); i += 2){
		pair[i>>1].first = vec.at(i);
		pair[i>>1].second = vec.at(i + 1);
		if (pair[i>>1].first < pair[i>>1].second)
			std::swap(pair[i>>1].first, pair[i>>1].second);
	}
	
	// for (size_t j = 0; j < vec.size() / 2; j++)
	// {
	// 	if (pair[j].first > pair[j + 1].first)
	// 	{
	// 		std::swap(pair[j], pair[j + 1]);
	// 		j--;
	// 	}
	// }
	// for (size_t k = 0; k < vec.size() / 2; k++)
	// 	tmp.push_back(pair[k].first);
	// size_t high = 0;
	// size_t low = 0;
	// size_t k = 0;
	// for (size_t count = 0; count < vec.size() / 2; count++){
	// 	k = count;
	// 	if (pair[k].second < tmp.at(tmp.size() / 2)){
	// 		high = tmp.size() / 2;
	// 		low = 0;
	// 	}
	// 	else {
	// 		high = tmp.size();
	// 		low = tmp.size() / 2;
	// 	}
	// 	while ( high - low == 0){
	// 	if (pair[k].second < tmp.at(tmp.size() / 2))
	// 		high -= (high - low) / 2;
	// 	else 
	// 		low += (high - low) / 2;
	// 	}
		tmp.insert(tmp.begin() + low, pair[k].second);
	}
	// this->_vec = tmp;
// }

void PmergeMe::sortDeque(){
	std::pair<unsigned int, unsigned int> pair[_deq.size()/2];

}


void PmergeMe::sort ()
{
	size_t T;
	T = clock();
	this->sortVec();
	T = clock() - T;
	this->printVector();
	std::cout << T << "ms since start" << std::endl;
	// tmp.insert()

	// PmergeMe kill;
	
	std::deque<int>::const_iterator itDeq;
}

PmergeMe::PmergeMe()
{
	std::cout << "How did you create this heresy ? (default constructor called) \nNow crash" << std::endl;
	exit(1);
	// make it sefgault
	char *str = NULL;
	int i = 55;
	int j = -1;
	while( ++j < i)
		str[j] = ' ';
	std::cout << str << "pair";
	//end of crashing sequence
	exit(0);
}

void PmergeMe::parsing(const char **argv)
{
	for (size_t i = 0; argv[i]; i++)
	{
		if (std::atoi(argv[i]) <= 0)
			throw PmergeMe::InvalidArgument();
	}
}

PmergeMe::PmergeMe (const PmergeMe &other)
{
	*this = other; 
}

void PmergeMe::printVector()
{
	std::cout << "Vector : ";
	std::vector<unsigned int>::iterator itVec1 = _vec.begin();
	std::vector<unsigned int>::iterator itVec2 = _vec.end();
	while (itVec1 != itVec2)
	{
		std::cout << *itVec1 << " ";
		itVec1++;
	}
	std::cout << std::endl;

	
}
void PmergeMe::printDeque()
{
	std::cout << "Deque : ";
	std::deque<unsigned int>::iterator itDeq1 = _deq.begin();
	std::deque<unsigned int>::iterator itDeq2 = _deq.end();
	while (itDeq1 != itDeq2)
	{
		std::cout << *itDeq1 << " ";
		itDeq1++;
	}
	std::cout << std::endl;

	
}

PmergeMe::PmergeMe (const char** argv)
{
	try {
		parsing(argv);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		exit (EXIT_FAILURE);
	}
	size_t i = 0;
	int tmp[1];
	this->_time = clock();
	while (argv[i] != NULL)
	{
  		*tmp = atoi(argv[i]);
		_deq.push_back(*tmp);
		_vec.push_back(*tmp);
		i++;
	}
}

PmergeMe::~PmergeMe()
{

}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	this->_deq = other._deq;
	this->_vec = other._vec;
	this->_time = other._time;
	return *this;
}
