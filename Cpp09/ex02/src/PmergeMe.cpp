#include "../header/PmergeMe.hpp"
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>

void PmergeMe::sort ()
{
	// std::vector<int>::reference itVec = _vec.at(0);	
	// std::vector<int>::reference itVec2 = _vec.at(1);
	std::pair<unsigned int, unsigned int> yay[_vec.size()/2];
	// std::vector<int>::const_iterator itVectmp;
	// *itVec = _vec.begin();
	// *itVec2 = --_vec.end();
	// if (itVec > itVec2)
	// {	
	// 	std::cout<<"trigger :" << itVec << itVec2;
	// 	std::swap(_vec.at(0), _vec.at(1));
	// }
	size_t i = 0;

	for (; i < _vec.size() / 2; i++)
	{
		yay[i].first = _vec.at(i * 2);
		yay[i].second = _vec.at(i * 2 + 1);
		// std::cout <<"test "<< yay[i].first << "|" << yay[i].second <<std::endl;
		if (yay[i].first < yay[i].second)
		{
			std::cout << "trigger"<<std::endl;
			std::swap(yay[i].first, yay[i].second);
		}
			std::cout <<"test "<< yay[i].first << "|" << yay[i].second <<std::endl;
	}
	for (size_t j = 0; j < _vec.size() / 2; j++)
	{
		if ( j < _vec.size() / 2 - 1 && yay[j].first > yay[j + 1].first)
		{
			std::cout<<yay[j].first <<"yay" << yay[j+1].first << "&&" << j<<std::endl;
			std::swap(yay[j], yay[j + 1]);
			j--;
		}
	}

	std::vector<unsigned int> tmp;
	for (size_t k = 0; k < _vec.size() / 2; k++)
		tmp.push_back(-1);
	for (size_t k = 0; k < i; k++)
		tmp.at(k)=yay[k].first;
	for (size_t  k = 0, w = 0; k < _vec.size() / 2 - 1; w = 0, k++, w=0)
	{
		// int pow;
		// pow = 2 ^(index-1) - pow;
		while (yay[k].second > tmp.at(w))
			w++;
		tmp.insert(tmp.begin() + w, yay[k].second); // change index of insert to have the A001768 sorting list https://en.wikipedia.org/wiki/Merge-insertion_sort
	}
	// for (size_t k = i + 1, j = 0; k > 0; k--, j=0)
	// {
	// 	while (tmp[j] < yay[k].first)
	// 		j++;
	// 	// tmp.at(j) = yay[k].first;

	// 	tmp.insert(tmp.begin()+ j, yay[k].first);
	// }



		// tmp.push_back(yay[k].first);
	if (_vec.size()%2)
	{
		int w;
		w = 0;
			while (*_vec.end() > tmp.at(w))
				w++;
			tmp.insert(tmp.begin() + w, *_vec.end());;
	}
	_vec = tmp;
	// tmp.insert()

	// PmergeMe kill;
	
	std::deque<int>::const_iterator itDeq;
}

PmergeMe::PmergeMe()
{
	std::cout << "How did you create this heresy ? (default constructor called) \nNow crash" << std::endl;
	// make it sefgault
	char *str = NULL;
	int i = 55;
	int j = -1;
	while( ++j < i)
		str[j] = ' ';
	std::cout << str << "yay";
	//end of crashing sequence
	exit(0);
}

void PmergeMe::parsing(const char **argv)
{
(void)argv;
// throw PmergeMe::InvalidArgument();
}

PmergeMe::PmergeMe (const PmergeMe &other)
{
	*this = other; 
}

void PmergeMe::printVector()
{
	std::cout << "Vector : ";
	// int i;
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
	std::cout << "Deque :";
	std::deque<unsigned int>::iterator itDeq1 = _deq.begin();
	std::deque<unsigned int>::iterator itDeq2 = _deq.end();
	while (itDeq1 != itDeq2)
	{
		std::cout << " " << *itDeq1 << " ";
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
	size_t i;
	i = 0;
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
