#include "PmergeMe.hpp"


int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Not enouth argument" << std::endl;
		return 0;
	}
	PmergeMe vest((const char **)argv + 1);
	
	std::cout << "Before sorting : ";
	vest.printVector();
	vest.sortVec();
	std::cout << "After sorting  : ";
	vest.printVector();

	// std::cout << "Before sorting : ";
	// vest.printDeque();
	// vest.sortDeque();
	// std::cout << "After sorting : ";
	// vest.printDeque();
}
