#include "../header/PmergeMe.hpp"
#include <iterator>
#include <vector>


void PmergeMe::sort ()
{

}

PmergeMe::PmergeMe()
{
	std::cout << "How did you create this heresy ? (default constructor called)" << std::endl;
}

void PmergeMe::parsing(const char **argv)
{
(void)argv;
throw PmergeMe::InvalidArgument();
}

PmergeMe::PmergeMe (const PmergeMe &other)
{
	*this = other; 
}

void PmergeMe::printVector()
{
	std::cout << "Vector :";
	std::vector<int>::iterator itVec1 = _vec.begin();
	std::vector<int>::iterator itVec2 = _vec.end();
	while (itVec1 != itVec2)
	{
		std::cout << " " << *itVec1 << " ";
		itVec1++;
	}
	std::cout << std::endl;

	
}
void PmergeMe::printDeque()
{
	std::cout << "Deque :";
	std::deque<int>::iterator itDeq1 = _deq.begin();
	std::deque<int>::iterator itDeq2 = _deq.end();
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
	while (argv[i] != NULL)
	{
		_deq.push_back(atoi(argv[i]));
		_vec.push_back(atoi(argv[i]));
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
