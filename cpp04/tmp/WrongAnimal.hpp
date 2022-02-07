#ifndef WRONGANIMAL
# define WRONGANIMAL

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>

class WrongAnimal
{
protected:
    std::string type;
public:
    std::string getType() const;
    virtual void makeSound(void) const;
    WrongAnimal();
    ~WrongAnimal();
};

#endif