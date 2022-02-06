#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
    std::cout << "WrongCat assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

WrongCat::WrongCat(const WrongCat &ref)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = ref;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Not meow !\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor called\n";
}