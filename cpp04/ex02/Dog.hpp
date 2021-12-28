#ifndef DOG
# define DOG

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
    Brain *brain;
public:
    void makeSound(void) const;
    void printIdea(int id);
    Dog();
    Dog(const Dog &src);
    ~Dog();
};

#endif