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
    int getRawBits(void);
    void	setRawBits(int const raw);
    ~Fixed();
};



#endif