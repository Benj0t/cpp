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
    std::cout << "Cat copy constructor called\n";
    this->brain = new Brain();
    *this = src;
}

Cat::Cat(std::string type) : Animal(type)
{
    this->brain = new Brain();
    std::cout << "Cat constructor called\n";
}

Cat& Cat::operator=(const Cat& ref)
{
    std::cout << "Cat assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    *this->brain = *ref.brain;
    return *this;
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