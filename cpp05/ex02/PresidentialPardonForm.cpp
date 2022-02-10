#include "PresidentialPardonForm.hpp"


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == false)
    {
        throw Form::NotSigned();
    }
    if (executor.getGrade() > this->executionGrade)
    {
        throw Form::GradeTooLowException();
    }
    std::cout << target << " has been pardoned by Zaphod Beeblebox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string trget): Form("PresidentialPardonFormCreationForm", 25, 5), target(trget)
{
    std::cout << "PresidentialPardonForm default constructor called !" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm default destructor called" << std :: endl;
}