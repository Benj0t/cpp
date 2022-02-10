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
    if (this->getIsSign() == false)
    {
        throw Form::NotSigned();
    }
    if (executor.getGrade() > this->getExecutionGrade())
    {
        throw Form::GradeTooLowException();
    }
    robotomisation();
}

RobotomyRequestForm::RobotomyRequestForm(std::string trget): Form("RobotomyRequestForm", 72, 45), target(trget)
{
    std::cout << "RobotomyRequestForm default constructor called !" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): Form("RobotomyRequestForm", 75, 45), target(src.target)
{
    std::cout << "RobotomyRequestForm copy constructor called !" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
    std::cout << "RobotomyRequestForm assignation constructor called" << std::endl;
	if (this != &src)
		this->target = src.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm default destructor called !" << std::endl;
}