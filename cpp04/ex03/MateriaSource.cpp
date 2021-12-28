#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): materia()
{
}

MateriaSource::MateriaSource(const MateriaSource &mat): materia()
{
	int i;

    i = 0;
    while (i < 4)
		materia[i] = mat.materia[i]->clone();
}

MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < 4)
        delete materia[i++];
}

void    MateriaSource::learnMateria(AMateria* a)
{
    int i = 0;
    while (i < 4)
    {
        if (!materia[i])
        {
            materia[i] = a;
            return ;
        }
        i++;
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (i < 4)
    {
        if (this->materia[i] && this->materia[i]->getType() == type)
        {
            return (this->materia[i]->clone());
        }
        i++;
    }
    return 0;
}