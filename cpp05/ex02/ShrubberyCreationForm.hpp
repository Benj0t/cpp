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
    std::string target;
    void printTree(void) const;
public:
    virtual void execute(Bureaucrat const & executor) const;
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& src);
    ShrubberyCreationForm& operator= (const ShrubberyCreationForm& src);
    ~ShrubberyCreationForm();
};
#endif