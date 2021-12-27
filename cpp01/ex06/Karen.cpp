#include "Karen.hpp"

void Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level)
{
	void (Karen::*FunctionPointers[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = 0;
	while (i < 4)
	{
		if (level.compare(arr[i]) == 0)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*FunctionPointers[0])();
		case 1:
			(this->*FunctionPointers[1])();
		case 2:
			(this->*FunctionPointers[2])();
		case 3:
			(this->*FunctionPointers[3])();
		default:
			break;
	}

}
