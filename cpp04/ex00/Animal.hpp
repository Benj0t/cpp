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
public:
    std::string getType() const;
    virtual void makeSound(void) const;
    Animal();
    ~Animal();
};

#endif