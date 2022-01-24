#ifndef PRESIDENTIAL
# define PRESIDENTIAL

# include <iostream>
# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include <cstdlib>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Presidential: public Form
{
private:
    const std::string target;
    void pardon(void);
public:
    virtual void Presidential::execute(Bureaucrat const & executor) const;
    Presidential(std::string target);
    ~Presidential();
};
#endif