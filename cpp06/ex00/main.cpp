#include <cstdlib>
#include <cctype>
#include <iostream>
#include <cmath>

void	convert_char(double data)
{
	char c = static_cast<char>(data);
	std::cout << "char: ";
	if (std::isnan(data) || std::isinf(data))
		std::cout << "impossible." << std::endl;
	else if (!std::isprint(c))
		std::cout << "non displayable." << std::endl;
	else
		std::cout << static_cast<char>(data) << std::endl;
}

void	convert_int(double data)
{	
	std::cout << "int: ";
	if (std::isnan(data) || std::isinf(data) || data > 2147483647 || data < -2147483648)
		std::cout << "impossible." << std::endl;
	else
		std::cout << static_cast<int>(data) << std::endl;
}

void	convert_float(double data, std::string string)
{
	float f = static_cast<float>(data);
	std::cout << "float: " << static_cast<float>(f);
	if (string.compare("nan") == 0 || string.compare("nanf") == 0 || std::isinf(data) || (!(string.find('.') == std::string::npos) && string.find(".0\0") == std::string::npos))
		std::cout << "f";
	else
		std::cout << ".0f";
	std::cout << std::endl;
}

void	print_double(double data, std::string string)
{
	std::cout << "double: " << static_cast<double>(data);
	if ((!(string.find(".0\0") == std::string::npos) || string.find('.') == std::string::npos) && string.compare("nan") && string.compare("nanf") != 0 && !std::isinf(data))
		std::cout << ".0";
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	double	dbl;

	if (ac != 2)
	{
		std::cerr << "Wrong number of arguments." << std::endl;
		return (1);
	}
	if (std::isprint(av[1][0]) && !av[1][1] && !std::isdigit(av[1][0]))
		dbl = static_cast<double>(av[1][0]);
	else
		dbl = std::atof(av[1]);
	convert_char(dbl);
	convert_float(dbl, av[1]);
	convert_int(dbl);
	print_double(dbl, av[1]);
}
