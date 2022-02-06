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
    std::string getType() const;
    virtual void makeSound(void) const;
    Animal();
    Animal(std::string type);
    Animal(const Animal &ref);
    Animal& operator=(const Animal& ref);
    ~Animal();
};

#endif