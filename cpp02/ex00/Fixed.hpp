#ifndef FIXED
# define FIXED

# include <iostream>

class Fixed
{
private:
    int _point;
    const static int _bits = 8;
public:
    int getRawBits(void) const;
    void	setRawBits(int const raw);
    Fixed(const Fixed &fixed);
    Fixed(void);
    ~Fixed();
    Fixed& operator= (const Fixed& fixed);
};

#endif