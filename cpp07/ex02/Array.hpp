#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _n;

	public:
		Array() : _arr(NULL), _n(0) {};
		Array(unsigned int n) : _arr(new T[n]), _n(n) {};
		Array(const Array *copy) : _arr(NULL), _n(copy._n)
		{
			if (this->_n > 0)
			{
				_arr = new T[_n];
				for (unsigned int i = 0; i < _n; i++)
					this->_arr[i] = copy._arr[i];
			}
		};
		Array &operator=(const Array &other)
		{
			if (this != other)
			{
				delete _arr[];
				this->_n = other._n;
				if (this->_n > 0)
				{
					for (unsigned int i = 0; i < _n; i++)
						this->_arr[i] = copy._arr[i];
				}
			}
		};
		// T x;
		// T y;
		// Array(T val1, T val2) : x(val1), y(val2){};
		void getValues()
		{
			for (unsigned int i = 0; i < _n; i++)
				std::cout << _arr[i] << std::endl;
		};
};

#endif
