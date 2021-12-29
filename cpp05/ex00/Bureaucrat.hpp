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
    const std::string getName();
    int getGrade();
    
    GradeTooHighException();
    GradeTooLowException();
    
    Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(std::string nme, int grade);
    Bureaucrat& operator= (const Bureaucrat& bcrat);
    ~Bureaucrat();
};

#endif