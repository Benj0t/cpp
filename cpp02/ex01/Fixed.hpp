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
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif