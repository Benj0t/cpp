#include "Form.hpp"

Form::Form(): name(), signGrade(150), executionGrade(150), isSigned(false)
{
}

Form::Form(std::string nme, int Sgrade, int Egrade): name(nme), isSigned(false), executionGrade(Egrade), signGrade(Sgrade)
{
    if (Egrade < 1 || Sgrade < 1)
        throw Form::GradeTooHighException();
    if (Egrade > 150 || Sgrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& f): name(f.getName()), isSigned(f.getIsSign()), executionGrade(f.getSignGrade()), signGrade(f.getExecutionGrade())
{
}

void Form::isExecutable(int execGrade) const
{
    if (this->isSigned == false)
        throw Form::NotSigned();
    if (execGrade > this->executionGrade)
        throw Form::GradeTooLowException();
}

void Form::isSignable(int sign) const
{
    if (isSigned == true)
        throw Form::AlreadySigned();
    if (sign > this->signGrade)
        throw Form::GradeTooLowException();
}

void Form::beSigned(const Bureaucrat &b) const
{
    if (b.getGrade() > this->getSignGrade())
        throw Form::GradeTooLowException();
	bool &n = const_cast<bool &>(this->isSigned);
	n = true;
}

std::string Form::getName() const
{
    return (this->name);
}

int Form::getSignGrade() const
{
    return (this->signGrade);
}

int Form::getExecutionGrade() const
{
    return (this->executionGrade);
}

bool Form::getIsSign() const
{
    return (this->isSigned);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return("FORM: This grade is too high !\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("FORM: This grade is too low !\n");
}

const char *Form::AlreadySigned::what() const throw()
{
    return("FORM: This form is already signed !\n");
}

const char *Form::NotSigned::what() const throw()
{
    return("FORM: This form is not signed !\n");
}

Form& Form::operator=(const Form& f)
{
	if (this == &f)
		return *this;
	std::string &n = const_cast<std::string &>(this->name);
	n = f.getName();
    int nb = const_cast<int &>(this->signGrade);
	nb = f.getSignGrade();
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Form &f)
{
    if (f.getIsSign() == true)
        out << f.getName() << " is signed, needs grade "<< f.getSignGrade() << " to be signed, and grade " << f.getExecutionGrade() << " to be executed"<< std::endl;
    if (f.getIsSign() == false)
        out << f.getName() << " is NOT signed, needs grade "<< f.getSignGrade() << " to be signed, and grade " << f.getExecutionGrade() << " to be executed"<< std::endl;
    return (out);
}

Form::~Form()
{
    std::cout << "Form default destructor called" << std :: endl;
}