#include "../header/PmergeMe.hpp"
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>


void PmergeMe::sort(std::vector<unsigned int> &vec){
	if (vec.size() <= 1)
		return;
	std::pair<unsigned int, unsigned int> pairs[vec.size()/2];					// step 1 and 2
	for (size_t i = 0; i < vec.size() - 1; i += 2){
		if (vec[i] < vec[i + 1]){
			pairs[i/2].first =  vec[i + 1];
			pairs[i/2].second =  vec[i];
		}
		else{
			pairs[i/2].first =  vec[i];
			pairs[i/2].second =  vec[i + 1];
		}
	}

	this->sort(pairs, vec.size()/2);
	mergeInsert(pairs);
}

void PmergeMe::sort(std::pair<unsigned int, unsigned int> *org, size_t size){
	if (size <= 1)
		return;
	_vec.clear();
	std::pair<void *, void *> pairs[size/2];
	for (size_t i = 0; i < size - 1; i += 2){
		if (org[i].first < org[i + 1].first){
			pairs[i/2].first =&org[i + 1];
			pairs[i/2].second =&org[i];
		}
		else{
			pairs[i/2].first =&org[i];
			pairs[i/2].second =&org[i + 1];
		}
	}
	sort(pairs, size / 2, 1);
}



size_t PmergeMe::readData(std::pair<void *, void *> *data, size_t depth){
	if (depth == 1)
		return (reinterpret_cast<std::pair<unsigned int, unsigned int> *>(data->first)->first);
	else
		return(readData(reinterpret_cast<std::pair<void *, void *> * >(data->first), depth - 1));
	}

size_t PmergeMe::readData(std::pair<void *, void *> *data, size_t depth, size_t second){
	if (depth != 1)
		return(readData(reinterpret_cast<std::pair<void *, void *> * >(data->first), depth - 1));
	if (second == 1)
		return (reinterpret_cast<std::pair<unsigned int, unsigned int> *>(data->first)->second);
	else if (second == 2)
		return (reinterpret_cast<std::pair<unsigned int, unsigned int> *>(data->second)->first);
	else if (second == 3)
		return (reinterpret_cast<std::pair<unsigned int, unsigned int> *>(data->second)->second);
	else 
		return(-2);
}



void PmergeMe::sort(std::pair<void *, void *> *org, size_t size, size_t depth){
	if (size <= 1){
		// _vec.push_back(this->readData(&org[0], depth));		
		return;
	}

	std::pair<void *, void *> pairs[size/2];
	for (size_t i = 0; i < size - 1; i += 2){
		if (this->readData(&org[i], depth) < this->readData(&org[i + 1], depth)){
			pairs[i/2].first =&org[i + 1];
			pairs[i/2].second =&org[i];
		}
		else{
			pairs[i/2].first =&org[i];
			pairs[i/2].second =&org[i + 1];
		}
	}
	sort(pairs, size / 2, depth + 1);
	if (size % 2)
		// mergeInsert(pairs, size/2, depth, this->readData(&org[size / 2-1], depth));
		;
	else
		mergeInsert(pairs, size/2, depth);

}


void PmergeMe::sortVec() {
	double start = clock();
	this->sort(_vec);
	double end = clock();
	std::cout << "Time for Deque :" << (double)(end - start)/ (double)CLOCKS_PER_SEC  << " s" << std::endl;
}

void PmergeMe::mergeInsert(std::pair<void *, void *> *pairs, size_t size, size_t depth){
	_vecSort.push_back(pairs[0].first);
	_vecSort.push_back(pairs[0].second);		//make insert here
	_vecSort.push_back(pairs[1].first);
	_vecSort.push_back(pairs[1].second);
	(void)size;
	(void)depth;
	// i = -1;
	// while (++i < size)
	// 	_vec.push_back(this->readData(&pairs[i], depth + 1, 1));


}

// void PmergeMe::mergeInsert(std::pair<unsigned int, unsigned int> *pairs){
// 	_vecSort.push_back(pairs[0].first);
// 	_vecSort.push_back(pairs[0].second);		//make insert here
// 	_vecSort.push_back(pairs[1].first);
// 	_vecSort.push_back(pairs[1].second);
// 	(void)size;
// 	(void)depth;
// 	// i = -1;
// 	// while (++i < size)
// 	// 	_vec.push_back(this->readData(&pairs[i], depth + 1, 1));


// }

void PmergeMe::mergeInsert(std::pair<void *, void *> *pairs, size_t size, size_t depth, size_t rest){
	// size_t i = -1;
	_vecSort.push_back(pairs[0].first);
	_vecSort.push_back(pairs[0].second);		//make insert here
	_vecSort.push_back(pairs[1].first);
	_vecSort.push_back(pairs[1].second);	//make insert here
	(void)size;
	(void)rest;
	(void)depth;
	// i = -1;
	// while (++i < size)
		// _vec.push_back(this->readData(&pairs[i], depth + 1, 1));
	// i = -1;
	// while (++i < size)
		// _vec.push_back(this->readData(&pairs[i], depth + 1, 2));
	// i = -1;
	// while (++i < size)
		// _vec.push_back(this->readData(&pairs[i], depth + 1, 3));
}

void PmergeMe::mergeInsert(std::pair<unsigned int, unsigned int> *pairs){
	// _vecSort.push_back(&pairs[0].first);
	// _vecSort.push_back(&pairs[0].second);		//make insert here
	// _vecSort.push_back(&pairs[1].first);
	// _vecSort.push_back(&pairs[1].second);
	(void)pairs;
	_vec.clear();
	unsigned int *i;
	std::vector<void *>::iterator itVec1 = _vecSort.begin();
	std::vector<void *>::iterator itVec2 = _vecSort.end();
	while (itVec1 != itVec2)
	{
		i = reinterpret_cast<unsigned int *>(reinterpret_cast<std::pair<unsigned int, unsigned int> *>(&itVec1)->first);
		_vec.push_back(*i);
		// _vec.push_back(reinterpret_cast<std::pair<unsigned int, unsigned int> *>(&itVec1)->second);
		// _vec.push_back(itVec1);
		itVec1++;
	}
	std::cout << std::endl;
}


void PmergeMe::mergeInsert(std::vector<unsigned int> &vec,std::vector<unsigned int> &main,std::vector<unsigned int> &pend){
	unsigned int i = 0;
	unsigned int j = 0;
	vec.clear();
	while (i < main.size() && j < pend.size()){
		if (main[i] > pend[j])
			vec.push_back(pend[j++]);
		else
			vec.push_back(main[i++]);
	}
	if (i < main.size())
		vec.insert(vec.end(), main.begin() + i, main.end());
	if (j < pend.size())
		vec.insert(vec.end(), pend.begin() + j, pend.end());
}


void PmergeMe::mergeInsert(std::deque<unsigned int> &deq,std::deque<unsigned int> &main,std::deque<unsigned int> &pend){
	unsigned int i = 0;
	unsigned int j = 0;

	deq.clear();
	while (i < main.size() && j < pend.size())
	{
		if (main[i] < pend[j])
			deq.push_back(main[i++]);
		else
			deq.push_back(pend[j++]);
	}
	if (i < main.size())
		deq.insert(deq.end(), main.begin() + i, main.end());
	if (j < pend.size())
		deq.insert(deq.end(), pend.begin() + j, pend.end());
}



void PmergeMe::sort(std::deque<unsigned int> &deq){
	if (deq.size()<= 1)
		return;
	std::deque<unsigned int> main(deq.begin(), deq.begin() + deq.size() / 2);
	std::deque<unsigned int> pend(deq.begin() + deq.size() / 2, deq.end());
	this->sort(main);
	this->sort(pend);
	this->mergeInsert(deq, main, pend);
}


void PmergeMe::sortDeque(){
	double start = clock();
	this->sort(_deq);
	double end = clock();
	std::cout << "Time for Deque :" << (double)(end - start) / (double)CLOCKS_PER_SEC << " s" << std::endl;
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
	char *pEnd;
	for (size_t i = 0; argv[i]; i++)
	{
		if (std::strtol(argv[i], &pEnd, 10) < 0 || *pEnd != 0)
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

PmergeMe::PmergeMe(const char** argv)
{
	try {
		parsing(argv);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
		exit(EXIT_FAILURE);
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

PmergeMe::~PmergeMe()
{

}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	this->_deq = other._deq;
	this->_vec = other._vec;
	return *this;
}
