/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemoreau <bemoreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 16:03:43 by bemoreau          #+#    #+#             */
/*   Updated: 2021/12/25 16:03:43 by bemoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <cstdlib>

class Zombie
{
	private:
		std::string _name;
	public:
		void setName(std::string name);
		void announce();		
		Zombie();
		~Zombie();
};
Zombie* zombieHorde( int N, std::string name );

#endif