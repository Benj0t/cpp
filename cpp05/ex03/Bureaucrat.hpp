#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat: public std::exception
{
private:
    const std::string name;
    int   grade;
    Bureaucrat();
public:
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw();
    };
    void signForm(const Form &f);
    void executeForm(Form const & form) ;
    std::string getName() const;
    int getGrade() const;
    void    decrementGrade();
    void    incrementGrade();
    Bureaucrat(const Bureaucrat &bcrat);
    Bureaucrat(std::string nme, int grade);
    Bureaucrat& operator= (const Bureaucrat& bcrat);
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bcrat);

#endif