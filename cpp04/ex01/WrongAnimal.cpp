#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Wrong animal")
{
    std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
    std::cout << "WrongAnimal assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = ref;
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
    return (this->_type);
}