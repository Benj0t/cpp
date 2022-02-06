#ifndef DOG
# define DOG

# include "Animal.hpp"

class Dog: public Animal
{
public:
    void makeSound(void) const;
    Dog();
    Dog(std::string type);
    Dog(const Dog &ref);
    Dog& operator=(const Dog& ref);
    ~Dog();
};

#endif