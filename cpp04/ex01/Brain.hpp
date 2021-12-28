#ifndef BRAIN
# define BRAIN

# include "Animal.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    void    print_idea(int id);
    Brain();
    Brain(const Brain &src);
    ~Brain();
};
#endif