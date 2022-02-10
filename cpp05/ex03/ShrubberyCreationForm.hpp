#ifndef SHRUBERRY_HPP
# define SHRUBERRY_HPP

# include <iostream>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
    const std::string target;
    void printTree(void) const;
public:
    virtual void execute(Bureaucrat const & executor) const;
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();
};
#endif