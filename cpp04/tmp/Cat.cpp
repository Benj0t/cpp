#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal()
{
    this->_type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat &src): Animal()
{
    this->_type = src.getType();
    this->brain = new Brain();
    *this->brain = *src.brain;
    std::cout << "Cat copy constructor called\n";
}


void Cat::makeSound(void) const
{
    std::cout << "Meow Meow !\n";
}

void Cat::printIdea(int id)
{
    this->brain->print_idea(id);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat default destructor called\n";
}