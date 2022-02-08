#ifndef WRONGCAT
# define WRONGCAT

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    void makeSound(void) const;
    WrongCat();
    WrongCat(const WrongCat &ref);
    WrongCat& operator=(const WrongCat& ref);
    ~WrongCat();
};

#endif