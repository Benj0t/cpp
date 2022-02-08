#include "AMateria.hpp"

AMateria::AMateria(): _type("Undefined")
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &ref)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = ref;
}

AMateria& AMateria::operator=(const AMateria& ref)
{
    std::cout << "AMateria assignation copy constructor called" << std::endl;
    this->_type = ref.getType();
    return *this;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* " << target.getName() << " uses " << this->getType() << " *";
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}