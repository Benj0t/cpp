#ifndef WRONGCAT
# define WRONGCAT

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    void makeSound(void) const;
    WrongCat(const WrongCat &ref);
    WrongCat& operator=(const WrongCat& ref);
    WrongCat();
    ~WrongCat();
};

#endif