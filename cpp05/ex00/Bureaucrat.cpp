#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string nme, int grade) : name(nme)
{
    this->grade = grade;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bcrat) : name(bcrat.getName())
{
	this->grade = bcrat.getGrade();
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

void    Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = this->grade - 1;
}

void    Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = this->grade + 1;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
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
    std::cout << "Bureaucrat assignation copy constructor called" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bcrat)
{
    out << bcrat.getName() << ", bureaucrat grade " << bcrat.getGrade() << std::endl;
    return (out);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat default destructor called" << std::endl;
}