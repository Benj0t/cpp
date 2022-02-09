#ifndef WRONGCAT
# define WRONGCAT

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    void makeSound(void) const;
    WrongCat();
    WrongCat(std::string type);
    WrongCat(const WrongCat &ref);
    WrongCat& operator=(const WrongCat& ref);
    virtual ~WrongCat();
};

#endif