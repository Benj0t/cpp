#include "ShrubberyCreationForm.hpp"

void Shrubbery::execute(Bureaucrat const & executor) const
{
    try{
        this->isExecutable(executor.grade);
        // EXECUTE BLABLA
    }
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
    }
    
}

Shrubbery::Shrubbery(std::string target): Form("ShrubberyCreationForm", 145, 137), this->target(target);
{
}

Shrubbery::~Shrubbery()
{
}