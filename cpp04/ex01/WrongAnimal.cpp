#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Wrong animal")
{
    std::cout << "WrongAnimal default constructor called\n";
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Default WrongAnimal sound\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called\n";
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}