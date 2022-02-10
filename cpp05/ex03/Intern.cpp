#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Form *CreateRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *CreateShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *CreatePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

const char *Intern::WrongName::what() const throw()
{
    return("INTERN: Could not create the form, the name is wrong!");
}

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Form *(*forms[3])(std::string) = {&CreateRobotomyRequestForm, &CreatePresidentialPardonForm, &CreateShrubberyCreationForm};
        
    int i = 0;
    while (i < 3)
    {
        if (tab[i].compare(name) == 0)
        {
            std::cout << "Intern created " << name << " form"<< std::endl;
            return (forms[i](target));
        }
        i++;
    }
    throw Intern::WrongName();
}

Intern::Intern()
{
    std::cout << "Intern default destructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}