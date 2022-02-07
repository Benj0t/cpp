#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
    this->_type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog default constructor called\n";
}

Dog::Dog(std::string type) : Animal(type)
{
    this->brain = new Brain();
    std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &src): Animal()
{

    std::cout << "Dog copy constructor called\n";
    this->brain = new Brain();
    *this = src;
}

Dog& Dog::operator=(const Dog& ref)
{
    std::cout << "Dog assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    *this->brain = *ref.brain;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf Wouf !\n";
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog default destructor called\n";
}

void Dog::printIdea(int id) 
{
    this->brain->print_idea(id);
}