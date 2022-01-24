#ifndef ROBOTOMY
# define ROBOTOMY

# include <iostream>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include <cstdlib>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Robotomy: public Form
{
private:
    const std::string target;
    void robotomisation(void);
public:
    virtual void Robotomy::execute(Bureaucrat const & executor) const;
    Robotomy(std::string target);
    ~Robotomy();
};
#endif