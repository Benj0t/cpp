#include "Brain.hpp"

Brain::Brain(const Brain &src)
{
    int i;

    i = 0;
    while (i < 100)
    {
        this->_ideas[i] = src._ideas[i];
        i++;
    }
    std::cout << "Brain's copy constructor called\n";
}

Brain& Brain::operator=(const Brain& ref)
{
    int i;

    i = 0;
    while (i < 100)
    {
        this->_ideas[i] = ref._ideas[i];
        i++;
    }
    std::cout << "Brain assignation copy constructor called" << std::endl;
    return *this;
}

Brain::Brain()
{
    int i;

    i = 0;
    while (i < 100)
    {
        this->_ideas[i] = "idea";
        i++;
    }
    std::cout << "Default Brain constructor called\n";
}

void    Brain::print_idea(int id)
{
    id--;
    if (id < 0 || id >= 100)
        return;
    std::cout << this->_ideas[id] << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor called\n";
}
