#include "Intern.hpp"

Intern::Intern()
{
    throw Bureaucrat::wrongConstructor;
}

Robotomy Intern::CreateRobotomy(std::string target)
{
    return (new Robotomy(target))
}

Shrubbery Intern::CreateShrubbery(std::string target)
{
    return (new Shrubbery(target))
}

Presidential Intern::CreatePresidential(std::string target)
{
    return (new Presidential(target))
}

Intern::makeForm(std::string name, std::string target)
{
    std::string[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    int i = 0;
    Form ret;
    Intern::form[3] = {new Robotomy(target), new Presidential(target), new Shrubbery(target)}
    Form* (Intern::*forms[3])(std::string) = {&CreateRobotomy, &CreatePresidential, &CreateShrubbery};
    while (i < 3)
    {
        if (string[i] == name)
        {
            ret = form[i](target);
            std::cout << "Intern created " << name << " form"<< std::endl;
        }
        i++;
    }
    std::cerr << "Intern could not create the form (wrong name)" << std::endl;
}
