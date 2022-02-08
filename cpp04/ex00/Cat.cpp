#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    std::cout << "Cat default constructor called\n";
}

Cat& Cat::operator=(const Cat& ref)
{
    std::cout << "Cat assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

Cat::Cat(const Cat &ref)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = ref;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow Meow !\n";
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called\n";
}