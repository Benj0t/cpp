#ifndef WRONGANIMAL
# define WRONGANIMAL

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    std::string getType() const;
    void makeSound(void) const;
    WrongAnimal();
    WrongAnimal(const WrongAnimal &ref);
    WrongAnimal& operator=(const WrongAnimal& ref);
    virtual ~WrongAnimal();
};

#endif