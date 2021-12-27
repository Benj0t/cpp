
#include "Fixed.hpp"

Fixed::Fixed(void) : point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int)
{

}

Fixed::Fixed(const float)
{
	
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Assignation operator called\n";
	this->point = fixed.point;
	return *this;
}

int Fixed::toInt(void) const
{

}

float Fixed::toFloat(void) const
{

}

int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called\n";
	return (this->point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->point = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}