#ifndef CAT
# define CAT

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
    Brain *brain;
public:
    void makeSound(void) const;
    void printIdea(int id);
    Cat();
    Cat(const Cat &src);
    ~Cat();
};

#endif