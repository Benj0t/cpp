#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>

class Bureaucrat: public std::exception
{
private:
    const std::string name;
    int   grade;
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
    Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void    decrementGrade();
    void    incrementGrade();
    Bureaucrat(const Bureaucrat& bcrat);
    Bureaucrat(int grade);
    Bureaucrat(std::string nme, int grade);
    Bureaucrat& operator= (const Bureaucrat& bcrat);
    ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bcrat);

#endif