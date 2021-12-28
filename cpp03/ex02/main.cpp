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

int main(void)
{
	ClapTrap	clap("Clapin");
	ClapTrap	clap2("clapDeux");

	clap.attack("clap2");
	clap2.takeDamage(clap.getAttackDamage());
	clap2.beRepaired(10);

	ScavTrap	scav("Scavin");
	ScavTrap	scav2("scavDeux");

	scav.attack("scav2");
	scav2.takeDamage(scav.getAttackDamage());
	scav2.guardGate();
	scav.beRepaired(10);

	FragTrap	frag("Fragin");
	FragTrap	frag2("fragDeux");

	frag.attack("frag2");
	frag2.takeDamage(frag.getAttackDamage());
	frag2.beRepaired(10);
	frag2.highFivesGuys();

	return (0);
}
   