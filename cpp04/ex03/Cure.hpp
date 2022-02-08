#ifndef CURE
# define CURE

# include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure();
	Cure(const Cure &I);
	Cure& operator=(const Cure& ref);
	virtual ~Cure();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif