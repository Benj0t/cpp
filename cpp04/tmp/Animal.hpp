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
    Animal(std::string type);
    Animal(const Animal &ref);
    Animal& operator=(const Animal& ref);
    virtual ~Animal();
    virtual std::string getType() const;
    virtual void makeSound(void) const = 0;
};

#endif