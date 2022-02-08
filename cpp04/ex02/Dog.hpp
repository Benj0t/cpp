#ifndef DOG
# define DOG

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog &src);
    Dog& operator=(const Dog& ref);
    void makeSound(void) const;
    void printIdea(int id);
    ~Dog();
};

#endif