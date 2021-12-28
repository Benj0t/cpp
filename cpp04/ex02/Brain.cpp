#include "Brain.hpp"

Brain::Brain(const Brain &src)
{
    int i;

    i = 0;
    while (i < 100)
    {
        this->ideas[i] = src.ideas[i];
        i++;
    }
    std::cout << "Brain's copy constructor called\n";
}

Brain::Brain()
{
    int i;

    i = 0;
    while (i < 100)
    {
        this->ideas[i] = "idea number " + std::to_string(i + 1);
        i++;
    }
    std::cout << "Default Brain constructor called\n";
}

void    Brain::print_idea(int id)
{
    if (id < 0 || id >= 100)
        return;
    std::cout << this->ideas[id] << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor called\n";
}
