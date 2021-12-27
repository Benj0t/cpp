#ifndef FIXED
# define FIXED

# include <iostream>

class Fixed
{
private:
    int point;
    const static int bits = 8;
public:
    Fixed(void);
    Fixed(const Fixed &fixed);
    Fixed& operator= (const Fixed& fixed);
    Fixed(const int);
    Fixed(const float);
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void);
    void	setRawBits(int const raw);
    ~Fixed();
};



#endif