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

std::string toString(int i) 
{
    std::stringstream ss;
    ss << i;
 
    return ss.str();
}

Brain::Brain()
{
    int i;

    i = 0;
    while (i < 100)
    {
        this->ideas[i] = "idea number " + toString(i + 1);
        i++;
    }
    std::cout << "Default Brain constructor called\n";
}

void    Brain::print_idea(int id)
{
    id--;
    if (id < 0 || id >= 100)
    {
        std::cout << "Idea index out of range (1 - 100)" << std::endl;
        return;
    }
    std::cout << this->ideas[id] << std::endl;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor called\n";
}
