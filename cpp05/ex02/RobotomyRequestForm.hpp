#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

# include <iostream>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include <cstdlib>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
    const std::string target;
    void robotomisation(void) const;
public:
    virtual void execute(Bureaucrat const & executor) const;
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
};
#endif