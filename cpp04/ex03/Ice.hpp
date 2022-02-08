#ifndef ICE
# define ICE

# include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &I);
	Ice& operator=(const Ice& ref);
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif