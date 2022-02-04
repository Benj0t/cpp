#include "Fixed.hpp"

Fixed::Fixed(void) : _point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed)
{

	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->_point = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_point = raw;
}