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
protected:
	std::string _type;
public:
	AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &ref);
    AMateria& operator=(const AMateria& ref);
    std::string const & getType() const;
    virtual ~AMateria();
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};



#endif