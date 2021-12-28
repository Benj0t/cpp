#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called\n";
}

void Animal::makeSound(void) const
{
    std::cout << "Default animal sound\n";
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called\n";
}

std::string Animal::getType() const
{
    return (this->type);
}