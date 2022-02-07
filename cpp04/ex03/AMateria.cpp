#include "AMateria.hpp"

AMateria::AMateria(): _type("Undefined")
{
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
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
}