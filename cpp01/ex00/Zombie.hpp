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

#ifndef EX01
# define EX01

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		void announce(void)
		{
			std::cout << '<' << name << '>'
					  << " BraiiiiiiinnnzzzZ...\n";
		}
	Zombie(void)
	{
	}
	~Zombie(void)
	{
		std::cout << '<' << name << '>'
				  << "is dead\n";
	}
};


#endif