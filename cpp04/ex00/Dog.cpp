#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called\n";
}

Dog& Dog::operator=(const Dog& ref)
{
    std::cout << "Dog assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

Dog::Dog(const Dog &ref)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = ref;
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf Wouf !\n";
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called\n";
}