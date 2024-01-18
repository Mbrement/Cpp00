#include "Iter.hpp"

int main(void)
{
	char str[] = "1234";
	::iter(str, 4, ::print);
	std::cout << "________" << std::endl;
	int tmp[3];
	tmp[0] = 42;
	tmp[1] = 43;
	tmp[2] = 44;
	::iter(tmp, 3, ::print);
	return 0;
}
