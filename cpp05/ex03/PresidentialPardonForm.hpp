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
    std::string target;
public:
    virtual void execute(Bureaucrat const & executor) const;
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& src);
    PresidentialPardonForm& operator= (const PresidentialPardonForm& src);
    ~PresidentialPardonForm();
};
#endif