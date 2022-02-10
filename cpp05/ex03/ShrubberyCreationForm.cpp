#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::printTree() const
{
    std::string file;
    file = target;
    file += "_ShrubberyCreationForm";
    std::ofstream outfile (file.c_str());
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->isSigned == false)
    {
        throw Form::NotSigned();
    }
    if (executor.getGrade() > this->executionGrade)
    {
        throw Form::GradeTooLowException();
    }
    printTree();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string trget): Form("ShrubberyCreationForm", 145, 137), target(trget)
{
    std::cout << "ShrubberyCreationForm default constructor called !" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm default destructor called !" << std::endl;
}