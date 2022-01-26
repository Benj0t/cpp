#include <cstdlib>
#include <cctype>
#include <iostream>
#include <cmath>

int main(int ac, char **av)
{
	double	dbl;
	char	c;
	int		i;
	float	f;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (1);
	}
	if (std::isprint(av[1][0]) && !av[1][1])
		dbl = static_cast<double>(av[1][0]);
	else
		dbl = std::atof(av[1]);
	c = static_cast<char>(dbl);
	i = static_cast<int>(dbl);
	f = static_cast<float>(dbl);
	std::cout << "char: ";
	if (std::isnan(dbl) || std::isinf(dbl))
		std::cout << "impossible." << std::endl;
	else if (!std::isprint(c))
		std::cout << "non displayable." << std::endl;
	else
		std::cout << static_cast<char>(dbl) << std::endl;
	std::cout << "int: ";
	if (std::isnan(dbl) || std::isinf(dbl) || dbl > 2147483647 || dbl < -2147483648)
		std::cout << "impossible." << std::endl;
	else
		std::cout << static_cast<int>(dbl) << std::endl;
	std::cout << "float: " << static_cast<float>(dbl);
	if (std::isnan(dbl) || std::isinf(dbl))
		std::cout << "f";
	else
		std::cout << ".0f";
	std::cout << std::endl;
	std::cout << "double: " << static_cast<double>(dbl) << std::endl;
    return (0);
}