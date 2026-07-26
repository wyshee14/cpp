#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <exception>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _n;

	public:
		Array() : _arr(NULL), _n(0) {};
		Array(unsigned int n) : _arr(new T[n]), _n(n) {};
		Array(const Array &copy) : _arr(NULL), _n(copy.size())
		{
			*this = copy;
		};
		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				if (this->_arr)
					delete[] _arr;
				this->_n = other.size();
				if (this->_n > 0)
				{
					_arr = new T[_n];
					for (unsigned int i = 0; i < _n; i++)
						this->_arr[i] = other._arr[i];
				}
				else
					_arr = NULL;
			}
			return (*this);
		};
		// Destructor
		~Array() {
			if (this->_arr)
				delete[] _arr;
			};

		// Getter
		T &getArray() const { return _arr; };
		unsigned int size() const { return _n; };

		// Overloading non-const operator
		// Return a reference as array element
		T &operator[](unsigned int index) const
		{
			if (index >= _n)
			{
				throw OutOfBoundsException();
			}
			return (_arr[index]);
		};

		// Overloading const operator (read-only) - use for const instance
		const T &operator[](unsigned int index) const
		{
			if (index >= _n)
			{
				throw OutOfBoundsException();
			}
			return (_arr[index]);
		};

		// Customie exception to handle out of bound
		class OutOfBoundsException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Error: Index out of bounds";
				}
		};
};

#endif
