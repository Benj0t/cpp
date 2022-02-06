#ifndef CAT
# define CAT

# include "Animal.hpp"

class Cat: public Animal
{
public:
    void makeSound(void) const;
    Cat();
    Cat(std::string type);
    Cat(const Cat &ref);
    Cat& operator=(const Cat& ref);
    ~Cat();
};

#endif