#ifndef CAT
# define CAT

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat &src);
    Cat& operator=(const Cat& ref);
    void makeSound(void) const;
    void printIdea(int id);
    virtual ~Cat();
};

#endif