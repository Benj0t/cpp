#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    //throw Exception
}

Bureaucrat::Bureaucrat(std::string nme, int grade): name(nme)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bcrat): name(bcrat.getName())
{
	this->grade = bcrat.getGrade();
}

void    Bureaucrat::incrementGrade()
{
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = this->grade - 1;
}

void    Bureaucrat::decrementGrade()
{
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = this->grade + 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("This grade is too high !\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("This grade is too low !\n");
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bcrat)
{
	if (this == &bcrat)
		return *this;
	std::string &n = const_cast<std::string &>(this->name);
	n = bcrat.getName();
	grade = bcrat.getGrade();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bcrat)
{
    out << bcrat.getName() << ", bureaucrat grade " << bcrat.getGrade() << std::endl;
    return (out);
}

Bureaucrat::~Bureaucrat()
{
}