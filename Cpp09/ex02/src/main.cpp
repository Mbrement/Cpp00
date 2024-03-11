#include "PmergeMe.hpp"


int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Not enouth argument" << std::endl;
		return 0;
	}
	PmergeMe vest((const char **)argv + 1);

	vest.printVector();
	vest.sort();
	vest.printVector();
	vest.printDeque();
return 0;
}
