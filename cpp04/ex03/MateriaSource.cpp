#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): materia()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &mat): materia()
{
	int i;

    i = 0;
    while (i < 4)
		materia[i] = mat.materia[i]->clone();
    std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ref)
{
	int i;

    i = 0;
    while (i < 4)
		materia[i] = ref.materia[i]->clone();
    std::cout << "MateriaSource assignation copy constructor called" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < 4)
        delete materia[i++];
    std::cout << "MateriaSource default destructor called" << std::endl;
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