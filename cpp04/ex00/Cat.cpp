#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called\n";
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow !\n";
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called\n";
}