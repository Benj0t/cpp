#ifndef INTERN
# define INTERN

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include "Form.hpp"

class Intern: public std::exception
{
private:
    Intern();
public:
    Form *makeForm(std::string name, std::string target);
    ~Intern();
};

#endif