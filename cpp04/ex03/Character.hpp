#ifndef CHARACTER
# define CHARACTER

# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
	Character();
public:
	~Character();
	Character(const Character &C);
	Character(std::string name);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif