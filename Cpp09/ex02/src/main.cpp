#include "PmergeMe.hpp"


int	main(int argc, char **argv)
{
	(void)argc;
	PmergeMe vest((const char **)argv + 1);

	vest.printVector();
	vest.printDeque();
return 0;
}
