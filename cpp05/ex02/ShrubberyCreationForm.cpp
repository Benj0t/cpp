#include "ShrubberyCreationForm.hpp"

void Shrubbery::execute(Bureaucrat const & executor) const
{
    try{
        isExecutable(executor.getGrade());
    }
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
    }
}

Shrubbery::Shrubbery(std::string trget): Form("ShrubberyCreationForm", 145, 137), target(trget)
{
    std::cout << "Shrubbery default constructor called !" << std::endl;
}

Shrubbery::~Shrubbery()
{
}