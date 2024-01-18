#include "easyfind.hpp"
#include <list>


int	main(void)
{
	std::vector<int> vec;
	vec.push_back(4);
	vec.push_back(8);
	vec.push_back(9);
	vec.push_back(6);
	vec.push_back(3);

	std::cout << "Is 3 in the vector ?" << std::endl;
	easyfind(vec, 3);
	std::cout << "Is 18 in the vector ?" << std::endl;
	easyfind(vec, 18);
	std::cout << std::endl << std::endl;

	std::list<int> lst;
	lst.push_back(4);
	lst.push_back(8);
	lst.push_back(9);
	lst.push_back(6);
	lst.push_back(3);

	std::cout << "Is 3 in the list ?" << std::endl;
	easyfind(lst, 3);
	std::cout << "Is 18 in the list ?" << std::endl;
	easyfind(lst, 18);
return 0;
}
