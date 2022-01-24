#ifndef SHRUBERRY
# define SHRUBERRY

# include <iostream>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Shrubbery: public Form
{
private:
    const std::string target;
    void printTree(void);
public:
    virtual void execute(Bureaucrat const & executor) const;
    Shrubbery(std::string target);
    ~Shrubbery();
};
#endif