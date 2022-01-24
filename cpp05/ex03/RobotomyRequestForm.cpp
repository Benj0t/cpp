#include "ShrubberyCreationForm.hpp"

void Robotomy::robotomisation(Bureaucrat const & executor)
{
    try
        execute(executor);
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
        return;
    }
    std::cout << "You hear drilling noises" << std::endl;
    if (rand % 2)
        std::cout << target << " has been successfully robotomised !" << std::endl;
    else
        std::cout << "Robotomy failed !" << std::endl;
}

void Robotomy::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == false)
        throw Form::NotSigned();
    if (execGrade > this->executionGrade)
        throw Form::GradeTooLowException();
    robotomisation();
}

Robotomy::Robotomy(std::string trget): Form("RobotomyCreationForm", 72, 45), target(trget)
{
    std::cout << "Robotomy default constructor called !" << std::endl;
}

Robotomy::~Robotomy()
{
    std::cout << "Robotomy default destructor called !" << std::endl;
}