#include "../header/PmergeMe.hpp"
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>


void PmergeMe::sort(std::vector<unsigned int> &vec){
	if (vec.size()<= 1)
		return;
	std::pair<unsigned int, unsigned int> pairs[vec.size() / 2];
	for ( size_t i = 0; i < vec.size() - 1; i += 2){
		if (vec.at(i) > vec.at(i + 1)){
			pairs[i / 2].first = vec.at(i);
			pairs[i / 2].second = vec.at(i + 1);
		}
		else{
			pairs[i / 2].first = vec.at(i + 1);
			pairs[i / 2].second = vec.at(i);
		}
	}
	double tmp = -1;
	if (vec.size()%2 != 0) 
		tmp = vec.at(vec.size() - 1);
	std::pair<unsigned int, unsigned int> tmp2;
	std::vector<std::pair<unsigned int, unsigned int> > vecMerge;
	vecMerge.push_back(pairs[0]);
	for (size_t i = 1; i < vec.size() / 2; i++){
		std::vector< std::pair<unsigned int, unsigned int> >::iterator it = std::upper_bound(vecMerge.begin(), vecMerge.end(), pairs[i]);
		vecMerge.insert(it, pairs[i]);
	}
	size_t min, max, cycle;
	min = cycle = 0;
	max = 1;
	vec.clear();
	for (size_t i = 0; i < vecMerge.size(); i++){
		vec.push_back(vecMerge[i].first);
	}

	for (size_t i = 0; i < vecMerge.size(); i++){
		max--;
		std::vector< unsigned int >::iterator it = std::upper_bound(vec.begin(), (vec.end() - 1 / 2), vecMerge[i].second);
		vec.insert(it, vecMerge[i].second);
		if (min >= max){
			cycle++;
			max = jacobsthal(cycle);
			if (max > vecMerge.size())
				max = vecMerge.size();
		}
	}
	if (tmp != -1){
		std::vector< unsigned int >::iterator it = std::upper_bound(vec.begin(), (vec.end()), tmp);
		vec.insert(it, tmp);
	}
}

void PmergeMe::sort(std::deque<unsigned int> &deq){
	if (deq.size()<= 1)
		return;
	std::pair<unsigned int, unsigned int> pairs[deq.size() / 2];
	for ( size_t i = 0; i < deq.size() - 1; i += 2){
		if (deq.at(i) > deq.at(i + 1)){
			pairs[i / 2].first = deq.at(i);
			pairs[i / 2].second = deq.at(i + 1);
		}
		else{
			pairs[i / 2].first = deq.at(i + 1);
			pairs[i / 2].second = deq.at(i);
		}
	}
	double tmp = -1;
	if (deq.size()%2 != 0) 
		tmp = deq.at(deq.size() - 1);
	std::pair<unsigned int, unsigned int> tmp2;
	std::deque<std::pair<unsigned int, unsigned int> > deqMerge;
	deqMerge.push_back(pairs[0]);
	for (size_t i = 1; i < deq.size() / 2; i++){
		std::deque< std::pair<unsigned int, unsigned int> >::iterator it = std::upper_bound(deqMerge.begin(), deqMerge.end(), pairs[i]);
		deqMerge.insert(it, pairs[i]);
	}
	size_t min, max, cycle;
	min = cycle = 0;
	max = 1;
	deq.clear();
	for (size_t i = 0; i < deqMerge.size(); i++){
		deq.push_back(deqMerge[i].first);
	}

	for (size_t i = 0; i < deqMerge.size(); i++){
		max--;
		std::deque< unsigned int >::iterator it = std::upper_bound(deq.begin(), (deq.end() - 1 / 2), deqMerge[i].second);
		deq.insert(it, deqMerge[i].second);
		if (min >= max){
			cycle++;
			max = jacobsthal(cycle);
			if (max > deqMerge.size())
				max = deqMerge.size();
		}
	}
	if (tmp != -1){
		std::deque< unsigned int >::iterator it = std::upper_bound(deq.begin(), (deq.end()), tmp);
		deq.insert(it, tmp);
	}
}

size_t PmergeMe::jacobsthal(size_t n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

void PmergeMe::sortVec(){
	this->sort(_vec);
}

void PmergeMe::sortDeque(){
	this->sort(_deq);
}



PmergeMe::PmergeMe(){
	std::cout << "How did you create this heresy ? (default constructor called) \nNow crash" << std::endl;
}

void PmergeMe::parsing(const char **argv){
	char *pEnd;
	double result;
	for (size_t i = 0; argv[i]; i++)
	{
		result = std::strtol(argv[i], &pEnd, 10);
		if ( result < 0 || result > 4294967295 || *pEnd != 0)
			throw PmergeMe::InvalidArgument();
	}
}

PmergeMe::PmergeMe (const PmergeMe &other){
	*this = other; 
}

void PmergeMe::printVector(){
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
void PmergeMe::printDeque(){
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

PmergeMe::PmergeMe (const char** argv){
	try {
		parsing(argv);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		throw ;
	}
	size_t i = 0;
	int tmp[1];
	while (argv[i] != NULL)
	{
  		*tmp = atoi(argv[i]);
		_deq.push_back(*tmp);
		_vec.push_back(*tmp);
		i++;
	}
}

PmergeMe::~PmergeMe(){
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other){
	if (this == &other)
		return *this;
	this->_deq = other._deq;
	this->_vec = other._vec;
	return *this;
}
