#include "RobotomyRequestForm.hpp"


void RobotomyRequestForm::robotomisation(void) const
{
    std::cout << "You hear drilling noises" << std::endl;
    if (rand() % 2)
        std::cout << target << " has been successfully robotomised !" << std::endl;
    else
        std::cout << "RobotomyRequestForm failed !" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == false)
        throw Form::NotSigned();
    if (executor.getGrade() > this->executionGrade)
        throw Form::GradeTooLowException();
    robotomisation();
}

RobotomyRequestForm::RobotomyRequestForm(std::string trget): Form("RobotomyRequestFormCreationForm", 72, 45), target(trget)
{
    std::cout << "RobotomyRequestForm default constructor called !" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm default destructor called !" << std::endl;
}