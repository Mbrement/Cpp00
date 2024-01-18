#ifndef SWAP_HPP
#define SWAP_HPP
#include <iostream>

template <typename T>
void print(T target)
{
	std::cout << target << std::endl;
}

template <typename ptr>
void iter(ptr *arr, size_t max, void (*fnc)(ptr&))
{
	size_t i;
	i = -1;
	while(++i < max)
	{
		fnc(arr[i]);
	}
} 

#endif