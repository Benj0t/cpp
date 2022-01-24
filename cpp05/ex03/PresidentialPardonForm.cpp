#include "ShrubberyCreationForm.hpp"

void Presidential::pardon(Bureaucrat const & executor)
{
    try
        execute(executor);
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
        return;
    }
    std::cout << target << " has been pardoned by Zaphod Beeblebox." << std::endl;
}

void Presidential::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == false)
        throw Form::NotSigned();
    if (execGrade > this->executionGrade)
        throw Form::GradeTooLowException();
    pardon();
}

Presidential::Presidential(std::string trget): Form("PresidentialCreationForm", 25, 5), target(trget)
{
    std::cout << "Presidential default constructor called !" << std::endl;
}

Presidential::~Presidential()
{
    std::cout << "Presidential default destructor called" << std :: endl;
}