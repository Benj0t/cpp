#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    //throw Exception
}

Bureaucrat(std::string nme, int grade)
{
    if (grade < 1)
        ;//throw Bureaucrat::gradeTooHighException
    if (grade > 150)
        ;//throw Bureaucrat::gradeTooLowException
    this->name = nme;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bcrat)
{
    this->name = bcrat.getName();
	this->grade = bcrat.getGrade();
}

void    Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
        throw Bureaucrat::gradeTooHighException;
    this->grade = this->grade - 1;
}

void    Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
        throw Bureaucrat::gradeTooLowException;
    this->grade = this->grade + 1;
}

Bureaucrat::GradeTooHighException()
{
    std::cout << "This grade is too high !\n";
}
Bureaucrat::GradeTooLowException()
{
    std::cout << "This grade is too low !\n";
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bcrat)
{
	if (this == &bcrat)
		return *this;
    this->name = bcrat.getName();
	this->grade = bcrat.getGrade();
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bcrat)
{
    out << bcrat.getName() << ", bureaucrat grade " << bcrat.getGrade();
    return (out);
}

Bureaucrat::~Bureaucrat()
{
}