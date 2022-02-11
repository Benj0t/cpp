#include "Data.hpp"

uintptr_t serialize(Data* p)
{
	return (reinterpret_cast<uintptr_t>(p));
}

Data* deserialize(uintptr_t nb)
{
	return (reinterpret_cast<Data *>(nb));
}

std::ostream	&operator<<(std::ostream &out, const Data &ptr)
{
	out << "n   : " << ptr.n << std::endl;
	out << "str : " << ptr.str << std::endl;
	out << "c   : " << ptr.c << std::endl;
	return out;
}