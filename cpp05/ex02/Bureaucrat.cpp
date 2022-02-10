#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string nme, int grade): name(nme)
{
    std::cout << "Bureaucrat constructor called\n";
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
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = this->grade - 1;
}

void Bureaucrat::executeForm(Form const & form)
{
    try{
        form.execute(*this);
    }
    catch (std::exception & e){
	    std::cout << e.what() << std::endl;
        return;
	}
    std::cout << this->name << " executed " << form.getName() << " form" << std::endl;
}

void    Bureaucrat::signForm(const Form &f)
{
    if (f.getIsSign() == true)
        std::cout << f.getName() << " is already signed" << std::endl;
    else 
    {
        try
        {
            f.beSigned(*this);
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
            return;
        }
        std::cout << this->name << " signs " << f.getName() << std::endl;
    }
}

void    Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = this->grade + 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("BUREAUCRAT: This grade is too high !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("BUREAUCRAT: This grade is too low !");
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
    std::cout << "Bureaucrat default destructor called !" << std::endl;
}