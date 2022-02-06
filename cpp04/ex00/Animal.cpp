#include "Animal.hpp"

Animal::Animal() : _type("Default Animal")
{
    std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called\n";
}

void Animal::makeSound(void) const
{
    std::cout << "Default animal sound\n";
}

Animal::Animal(const Animal &ref)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = ref;
}

Animal& Animal::operator=(const Animal& ref)
{
    std::cout << "Animal assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

std::string Animal::getType() const
{
    return (this->_type);
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called\n";
}