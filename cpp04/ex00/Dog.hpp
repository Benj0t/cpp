#ifndef DOG
# define DOG

# include "Animal.hpp"

class Dog: public Animal
{
public:
    void makeSound(void) const;
    Dog();
    ~Dog();
};

#endif