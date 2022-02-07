#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called\n";
}

void WrongCat::makeSound(void) const
{
    std::cout << "Not meow !\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor called\n";
}