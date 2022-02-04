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


	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.takeDamage(1);
	toto.beRepaired(10);
	std::cout << std::endl;
	return (0);
}