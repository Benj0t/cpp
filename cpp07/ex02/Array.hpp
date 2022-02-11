#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T   *_array;
    unsigned int _size;
public:
    Array(): _array(0), _size(0){
        std::cout << "Default constructor called" << std::endl;
    };
    Array(unsigned int n): _array(new T[n]), _size(n){
        int i = 0;
        while (i < n)
            this->_array[i++] = 0;
        std::cout << "Constructor called" << std::endl;

    };
    Array(const Array &ref): _array(NULL){
        std::cout << "Copy constructor called" << std::endl;
         *this = ref;
    };
	unsigned int	size(void) const {
		return (this->_size);
	};
    Array &operator=(const Array &ref){
        std::cout << "Assignation operator called" << std::endl;
        _size = ref._size;
        if (this->_array != NULL)
            delete[] _array;
        this->_array = new T[_size];
        int i = 0;
        while (i < _size)
        {
            _array[i] = ref._array[i];
            i++;
        }
        return *this;
    };
	T	&operator[](std::size_t n) const{
		if (n >= this->_size)
			throw InvalidIndex();
		return (this->_array[n]);
	};
    class InvalidIndex : public std::exception
    {
        public:
            const char *what() const throw(){
                return ("Invalid index");
            }
    };
    ~Array(){
        delete[] _array;
        std::cout << "Destructor called" << std::endl;
    };
};

#endif