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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	toto("toto");
	ClapTrap	michel(toto);
	ClapTrap	Didier;
	Didier = michel;

	toto.takeDamage(9);
	toto.beRepaired(2);
	toto.takeDamage(2);
	toto.takeDamage(2);
	toto.beRepaired(2);
	std::cout << std::endl;
	ScavTrap	titi("titi");
    ScavTrap    titi2(titi);
    ClapTrap    titi3 = titi2;
	titi.takeDamage(90);
    titi.beRepaired(20);
	titi.attack("a spider");
	titi.guardGate();
	titi.attack("a spider");
	titi.takeDamage(50);
	titi.attack("a spider");
	titi.guardGate();
	std::cout << std::endl;
	return (0);
}
   