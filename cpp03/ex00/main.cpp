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
	ClapTrap	toto("toto");
	ClapTrap	michel(toto);
	ClapTrap	Didier;
	Didier = michel;

	toto.takeDamage(2);
	toto.takeDamage(2);
	toto.takeDamage(2);
	toto.takeDamage(2);
	toto.beRepaired(2);
	toto.takeDamage(2);
	toto.takeDamage(2);
	toto.takeDamage(2);
	toto.beRepaired(2);
	std::cout << std::endl;
	ClapTrap	titi("titi");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	titi.attack("a spider");
	return (0);
}