#include "Data.hpp"

int	main(void)
{
	Data		data;

	data.n = 42;
	data.c = 'c';
	data.str = "bonjour";
	std::cout << data << std::endl;

	uintptr_t	ser = serialize(&data);
	Data		deser = *deserialize(ser);

	std::cout << "serialize result: " << ser << std::endl;
    std::cout << std::endl;
	std::cout << "deserialize result: " << std::endl << deser << std::endl;
	return 0;
}