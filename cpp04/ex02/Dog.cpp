#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog &src): Animal()
{
    this->type = src.getType();
    this->brain = new Brain();
    *this->brain = *src.brain;
    std::cout << "Dog copy constructor called\n";
}

void Dog::makeSound(void) const
{
    std::cout << "Wouf Wouf !\n";
}

Dog::~Dog()
{
    if (this->brain)
        delete this->brain;
    std::cout << "Dog default destructor called\n";
}

void Dog::printIdea(int id) 
{
    this->brain->print_idea(id);
}