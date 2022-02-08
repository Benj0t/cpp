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
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &ref);
    WrongAnimal& operator=(const WrongAnimal& ref);
    ~WrongAnimal();
};

#endif