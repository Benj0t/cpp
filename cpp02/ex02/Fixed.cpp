
#include "Fixed.hpp"

Fixed::Fixed(void) : point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called\n";
	this->point = nb << this->bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called\n";
	this->point = (int)(roundf(nb * (1 << this->bits)));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->point = raw;
}

Fixed::Fixed(const Fixed& fxed)
{
	std::cout << "Copy constructor called\n";
	this->point = fxed.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& fxed)
{
	std::cout << "Assignation operator called\n";
	if (this == &fxed)
		return *this;
	this->point = fxed.getRawBits();
	return *this;
}

int Fixed::toInt(void) const
{
	return ((int)(this->point >> this->bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->point / (float)(1 << this->bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

bool Fixed::operator<(Fixed const &fxed) const
{
	return this->getRawBits() < fxed.getRawBits();
}
bool Fixed::operator>(Fixed const &fxed) const
{
	return this->getRawBits() > fxed.getRawBits();
}
bool Fixed::operator<=(Fixed const &fxed) const
{
	return this->getRawBits() <= fxed.getRawBits();
}
bool Fixed::operator>=(Fixed const &fxed) const
{
	return this->getRawBits() >= fxed.getRawBits();
}
bool Fixed::operator==(Fixed const &fxed) const
{
	return this->getRawBits() == fxed.getRawBits();
}
bool Fixed::operator!=(Fixed const &fxed) const
{
	return this->getRawBits() != fxed.getRawBits();
}

Fixed Fixed::operator+(Fixed const &fxed) const
{
	Fixed result(*this);
	result.setRawBits(this->getRawBits() + fxed.getRawBits());
	return result;
}
Fixed Fixed::operator-(Fixed const &fxed) const
{
	Fixed result(*this);
	result.setRawBits(this->getRawBits() - fxed.getRawBits());
	return result;
}
Fixed Fixed::operator*(Fixed const &fxed) const
{
	Fixed result(*this);
	result.setRawBits(((long)this->getRawBits() * (long)fxed.getRawBits()) / (1 << this->bits));
	return result;
}
Fixed Fixed::operator/(Fixed const &fxed) const
{
	Fixed result(*this);
	if (fxed.point == 0)
	{
		std::cout << "Cant divide by zero\n";
		return result;
	}
	result.setRawBits(((long)this->getRawBits() * (1 << this->bits)) / (long)fxed.getRawBits());
	return result;
}

Fixed &Fixed::operator++()
{
	this->point++;
	return (*this);
}
Fixed &Fixed::operator--()
{
	this->point--;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed result(*this);
	operator++();
	return result;
}
Fixed Fixed::operator--(int)
{
	Fixed result(*this);
	operator--();
	return result;
}

Fixed &Fixed::min(Fixed &cmp, Fixed &fxed)
{
	if (cmp < fxed)
		return (cmp);
	return (fxed);
}
Fixed &Fixed::max(Fixed &cmp, Fixed &fxed)
{
	if (cmp > fxed)
		return (cmp);
	return (fxed);
}
Fixed const &Fixed::min(Fixed const &cmp, Fixed const &fxed)
{
	if (cmp < fxed)
		return (cmp);
	return (fxed);
}

Fixed const &Fixed::max(Fixed const &cmp, Fixed const &fxed)
{
	if (cmp > fxed)
		return (cmp);
	return (fxed);
}