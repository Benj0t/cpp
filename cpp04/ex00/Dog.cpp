#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called\n";
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf Wouf !\n";
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called\n";
}