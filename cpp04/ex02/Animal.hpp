#ifndef ANIMAL
# define ANIMAL

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>

class Animal
{
protected:
    std::string type;
    Animal();
public:
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound(void) const;
};

#endif