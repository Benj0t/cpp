/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 14:50:38 by bemoreau          #+#    #+#             */
/*   Updated: 2021/12/25 14:50:38 by bemoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie *horde = NULL;
	int nb;
	if (argc != 3)
	{
		std::cout << "Error\nWrong number of arguments\n";
		return 1;
	}
	nb = std::atoi(argv[1]);
	if (nb <= 0)
	{
		std::cout << "Error\nWrong argument\n";
		return 1;
	}
	horde = horde->zombieHorde(nb, argv[2]);
	for (int i = 0; i < nb; i++)
		horde[i].announce();
	delete[] horde;
}