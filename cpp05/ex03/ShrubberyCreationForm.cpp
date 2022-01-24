#include "ShrubberyCreationForm.hpp"

void Shrubbery::printTree(Bureaucrat const & executor)
{
    try
        execute(executor);
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
        return;
    }
    std::ofstream outfile (target + "_shrubbery");
    outfile << "          &&& &&  & &&" << std::endl;
    outfile << "      && &\\/&\\|& ()|/ @, &&" << std::endl;
    outfile << "      &\\/(/&/&||/& /_/)_&/_&" << std::endl;
    outfile << "   &() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
    outfile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
    outfile << "&&   && & &| &| /& & % ()& /&&" << std::endl;
    outfile << " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
    outfile << "     &&     \\|||" << std::endl;
    outfile << "             |||" << std::endl;
    outfile << "             |||" << std::endl;
    outfile << "             |||" << std::endl;
    outfile << "       , -=-~  .-^- _" << std::endl;
    outfile << "ejm97         `" << std::endl;
    outfile.close();
}

void Shrubbery::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == false)
        throw Form::NotSigned();
    if (execGrade > this->executionGrade)
        throw Form::GradeTooLowException();
    printTree(executor);
}

Shrubbery::Shrubbery(std::string trget): Form("ShrubberyCreationForm", 145, 137), target(trget)
{
    std::cout << "Shrubbery default constructor called !" << std::endl;
}

Shrubbery::~Shrubbery()
{
    std::cout << "Shrubbery default destructor called !" << std::endl;
}