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
		void announce(void)
		{
			std::cout << '<' << name << '>'
					  << " BraiiiiiiinnnzzzZ...\n";
		}
	Zombie* zombieHorde( int N, std::string name );
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