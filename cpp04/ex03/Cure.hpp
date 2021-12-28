#ifndef CURE
# define CURE

# include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure();
	~Cure();
	Cure(const Cure &I);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif