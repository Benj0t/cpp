#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>

class Bureaucrat
{
private:
    const std::string name;
    int   grade;
public:
    virtual ~Bureaucrat();
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw(){
                return ("Your grade is too high !");
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw(){
                return ("Your grade is too low");
            }
    };
    std::string getName() const;
    int getGrade() const;
    void    decrementGrade();
    void    incrementGrade();
    Bureaucrat(const Bureaucrat& bcrat);
    Bureaucrat(std::string nme, int grade);
    Bureaucrat& operator= (const Bureaucrat& bcrat);
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bcrat);

#endif