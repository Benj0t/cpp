#ifndef AMATERIA
# define AMATERIA


# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	std::string type;
	AMateria();
public:
    AMateria(std::string const & type);
    std::string const & getType() const;
    virtual ~AMateria();
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};



#endif