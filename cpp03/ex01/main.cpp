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

int main()
{
    ClapTrap p1("Francis");
    ScavTrap p2("Porc");

	std::cout << std::endl;
    p1.attack("Porc");
    p2.takeDamage(p1.getAttackDamage());
    p2.attack("Francis");
    p1.takeDamage(p2.getAttackDamage());
    p2.beRepaired(15);
	p1.beRepaired(25);
	p2.guardGate();
}
   