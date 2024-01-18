#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <iostream>

template <typename T>
class Array {
public :
	Array(){
		_size = 0;
		_data = NULL;
	}

	Array(unsigned int n) :
		_data(new T[n]),
		_size(n)
	{
		for (size_t i = 0; i < _size; i++)
			_data[i] = T();
	}
	Array(const Array<T>& cpy) :
		_data(new T[cpy._size]),
		_size(cpy._size)
	{
		for (size_t i = 0; i < _size; i++)
			_data[i] = cpy._data[i];
	}

	~Array()
	{
		delete [] _data;
	}

	size_t size()
	{
		return _size;
	}

	class OutOfRange : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Out of range";
		}
	};

	Array	&operator=(const Array &old)
	{
		delete _data;
		_size = old.size();
		_data(new T[_size]);
		for (size_t i = 0; i < _size; i++)
			_data[i] = old._data[i];
	}

	T	&operator[](const size_t &index)
	{
		if (index >= this->size())
			throw OutOfRange();
		return _data[index];
	}

	T setT(size_t i);

private :
	T *_data;
	size_t _size;
};



#endif