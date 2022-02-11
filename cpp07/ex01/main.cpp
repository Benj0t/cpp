#include "iter.hpp"

int main()
{
	std::string	tabS[4] = {"Julien", "MNL", "Didier", "CGT"};
	int			tabI[4] = {0, 1, 2, 3};

    iter(tabS, 4, showTab);
    std::cout << std::endl;
    iter(tabI, 4, showTab);
}