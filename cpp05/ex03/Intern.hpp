#ifndef INTERN
# define INTERN

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include "Form.hpp"

class Intern
{
public:
    Form *makeForm(std::string name, std::string target);
    class WrongName : public std::exception
    {
        public:
            const char *what() const throw();
    };
    Intern();
    ~Intern();
};

#endif