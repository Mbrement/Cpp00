#include "PmergeMe.hpp"


int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Not enouth argument" << std::endl;
		return 0;
	}
	try {

	PmergeMe vest((const char **)argv + 1);
	std::cout << "Before sorting : ";
	vest.printVector();
	double start = clock();
	vest.sortVec();
	double end = clock();
	std::cout << "After sorting  : ";
	vest.printVector();
	std::cout << "Time for Vector : " << (double)(end - start)/ (double)CLOCKS_PER_SEC  << " s" << std::endl;
	start = clock();
	vest.sortDeque();
	end = clock();
	std::cout << "Time for Deque  : " << (double)(end - start)/ (double)CLOCKS_PER_SEC  << " s" << std::endl;
	}
	catch(std::exception &e){
		return (1);
	}
	return (0);
}
