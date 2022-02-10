#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP

# include <iostream>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include <cstdlib>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
    const std::string target;
public:
    virtual void execute(Bureaucrat const & executor) const;
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
};
#endif