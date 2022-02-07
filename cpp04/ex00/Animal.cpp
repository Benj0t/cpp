#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called\n";
}


Animal::Animal(const Animal &ref)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = ref;
}

std::string Animal::getType() const
{
    return (this->_type);
}

Animal& Animal::operator=(const Animal& ref)
{
    std::cout << "Animal assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "Default animal sound\n";
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called\n";
}