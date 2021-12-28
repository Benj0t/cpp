#ifndef ICE
# define ICE

# include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice();
	~Ice();
	Ice(const Ice &I);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif