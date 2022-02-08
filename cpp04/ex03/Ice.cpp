#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &I):	AMateria(I.getType())
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& ref)
{
    std::cout << "Ice assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}