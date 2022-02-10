#include "PresidentialPardonForm.hpp"


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getIsSign() == false)
    {
        throw Form::NotSigned();
    }
    if (executor.getGrade() > this->getExecutionGrade())
    {
        throw Form::GradeTooLowException();
    }
    std::cout << target << " has been pardoned by Zaphod Beeblebox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string trget): Form("PresidentialPardonForm", 25, 5), target(trget)
{
    std::cout << "PresidentialPardonForm default constructor called !" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src): Form("PresidentialPardonForm", 25, 5), target(src.target)
{
    std::cout << "PresidentialPardonForm copy constructor called !" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
    std::cout << "PresidentialPardonForm assignation constructor called" << std::endl;
	if (this != &src)
		this->target = src.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm default destructor called !" << std::endl;
}