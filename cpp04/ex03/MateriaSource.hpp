#ifndef MATERIASOURCE
# define MATERIASOURCE


#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *materia[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &M);
	virtual void learnMateria(AMateria* a);
	virtual AMateria* createMateria(std::string const & type);
};

#endif