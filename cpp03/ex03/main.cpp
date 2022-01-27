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

#include "DiamondTrap.hpp"

int main(void)
{
	// ClapTrap	clap("Clapin");
	// ClapTrap	clap2("clapDeux");

	// clap.attack("clap2");
	// clap2.takeDamage(clap.getAttackDamage());
	// clap2.beRepaired(10);

	// ScavTrap	scav("Scavin");
	// ScavTrap	scav2("scavDeux");

	// scav.attack("scav2");
	// scav2.takeDamage(scav.getAttackDamage());
	// scav2.guardGate();
	// scav.beRepaired(10);

	// FragTrap	frag("Fragin");
	// FragTrap	frag2("fragDeux");

	// frag.attack("frag2");
	// frag2.takeDamage(frag.getAttackDamage());
	// frag2.beRepaired(10);
	// frag2.highFivesGuys();

	DiamondTrap	diamond("diamondun");
	DiamondTrap	diamond2("diamondDeux");

	diamond.attack("diamond2");
	diamond2.takeDamage(diamond.getAttackDamage());
	diamond2.beRepaired(10);
	diamond2.highFivesGuys();
	diamond2.guardGate();
	diamond2.whoAmI();
	return (0);
}
   