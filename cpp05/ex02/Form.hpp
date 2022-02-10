#ifndef FORM
# define FORM

# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string name;
    const int     signGrade;
    const int     executionGrade;
    bool    isSigned;
public:
    Form(const Form& bcrat);
    Form(int grade);
    Form(std::string nme, int Sgrade, int Egrade);
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
    class AlreadySigned : public std::exception
    {
        public:
            const char *what() const throw();
    };
    class NotSigned : public std::exception
    {
        public:
            const char *what() const throw();
    };
    virtual void execute(Bureaucrat const & executor) const = 0;
    void isExecutable(int grade) const;
    void isSignable(int sign) const ;
    void beSigned(const Bureaucrat &b) const;
    void setIsSign(bool value);
    std::string getName() const;
    int getExecutionGrade() const;
    int getSignGrade() const;
    bool getIsSign() const;
    Form& operator= (const Form& bcrat);
    virtual ~Form();
};

std::ostream& operator<<(std::ostream &out, const Form &f);

#endif