#ifndef ANIMAL
# define ANIMAL

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal &ref);
    Animal& operator=(const Animal& ref);
    virtual void makeSound(void) const;
    std::string getType() const;
    virtual ~Animal();
};

#endif