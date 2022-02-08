#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &I):	AMateria(I.getType())
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& ref)
{
    std::cout << "Cure assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}