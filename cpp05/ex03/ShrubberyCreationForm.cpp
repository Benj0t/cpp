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
    if (this->getIsSign() == false)
    {
        throw Form::NotSigned();
    }
    if (executor.getGrade() > this->getExecutionGrade())
    {
        throw Form::GradeTooLowException();
    }
    printTree();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string trget): Form("ShrubberyCreationForm", 145, 137), target(trget)
{
    std::cout << "ShrubberyCreationForm default constructor called !" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): Form("ShrubberyCreationForm", 145, 137), target(src.target)
{
    std::cout << "ShrubberyCreationForm copy constructor called !" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
    std::cout << "ShrubberyCreationForm assignation constructor called" << std::endl;
	if (this != &src)
		this->target = src.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm default destructor called !" << std::endl;
}