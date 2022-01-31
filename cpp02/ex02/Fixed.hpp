#ifndef FIXED
# define FIXED

# include <math.h>
# include <iostream>

class Fixed
{
private:
    int _point;
    const static int _bits = 8;
public:
    Fixed(void);
    Fixed(const Fixed &fixed);
    Fixed& operator= (const Fixed& fixed);
    Fixed(const int nb);
    Fixed(const float nb);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits() const;
    void	setRawBits(int const raw);
    ~Fixed();

	bool operator<(Fixed const &fxed) const;
	bool operator>(Fixed const &fxed) const;
	bool operator<=(Fixed const &fxed) const;
	bool operator>=(Fixed const &fxed) const;
	bool operator==(Fixed const &fxed) const;
	bool operator!=(Fixed const &fxed) const;

	Fixed operator+(Fixed const &fxed) const;
	Fixed operator-(Fixed const &fxed) const;
	Fixed operator*(Fixed const &fxed) const;
	Fixed operator/(Fixed const &fxed) const;

	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &cmp, Fixed &fxed);
	static Fixed &max(Fixed &cmp, Fixed &fxed);
	static Fixed const &min(Fixed const &cmp, Fixed const &fxed);
	static Fixed const &max(Fixed const &cmp, Fixed const &fxed);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif