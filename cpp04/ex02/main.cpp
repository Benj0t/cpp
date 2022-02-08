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

#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	{
		//Animal any;
		std::cout << std::endl;

		Cat *cat1 = new Cat();
		std::cout << std::endl;
		Cat cat2(*cat1);
		std::cout << std::endl;
		Cat cat3;
		cat3 = cat2;
		delete cat1;
		cat2.printIdea(100);
		std::cout << "cat2.getType() = " << cat2.getType() << std::endl;
		std::cout << "cat2.makeSound() = "; cat2.makeSound();
		std::cout << std::endl;
		cat3.printIdea(100);
		std::cout << "cat3.getType() = " << cat3.getType() << std::endl;
		std::cout << "cat3.makeSound() = "; cat3.makeSound();
	}
	std::cout << std::endl;
}