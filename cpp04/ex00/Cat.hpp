#ifndef CAT
# define CAT

# include "Animal.hpp"

class Cat: public Animal
{
public:
    void makeSound(void) const;
    Cat();
    Cat(const Cat &ref);
    Cat& operator=(const Cat& ref);
    virtual ~Cat();
};

#endif