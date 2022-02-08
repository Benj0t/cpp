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

int main()
{
	{
		int	n = 4;

		std::cout << std::endl;
		std::cout << std::endl;
		Animal *animals[n];
		for (int i = 0; i < n; i++)
		{
			if (i < n / 2)
			{
				animals[i] = new Dog();
				std::cout << std::endl;
			}
			else
			{
				animals[i] = new Cat();
				std::cout << std::endl;
			}
		}
		std::cout << "animals[0].getType() = " << animals[0]->getType() << std::endl;
		std::cout << "animals[2].getType() = " << animals[2]->getType() << std::endl;
		std::cout << "animals[1].makeSound() = "; animals[1]->makeSound();
		std::cout << "animals[3].makeSound() = "; animals[3]->makeSound();

		std::cout << std::endl;
		Animal otherAnimal(*animals[1]);
		std::cout << "otherAnimal.getType() = " << otherAnimal.getType() << std::endl;
		std::cout << "otherAnimal.makeSound() = "; otherAnimal.makeSound();

		std::cout << std::endl;
		Animal otherAnimal2;
		otherAnimal2 = *animals[3];
		std::cout << "otherAnimal2.getType() = " << otherAnimal2.getType() << std::endl;
		std::cout << "otherAnimal2.makeSound() = "; otherAnimal2.makeSound();

		std::cout << std::endl;
		for (int i = 0; i < n; i++)
		{
			delete animals[i];
			std::cout << std::endl;
		}
	}
	{
		std::cout << std::endl << "COPY TEST" << std::endl;
		std::cout << std::endl;

		Cat *cat = new Cat();
		std::cout << std::endl;
		Cat cat2(*cat);
		std::cout << std::endl;
		delete cat;
		cat2.printIdea(50);
		std::cout << "cat2.getType() = " << cat2.getType() << std::endl;
		std::cout << "cat2.makeSound() = "; cat2.makeSound();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << "ASSIGNATION TEST" << std::endl;
		std::cout << std::endl;

		Cat *cat = new Cat();
		std::cout << std::endl;
		Cat cat2;
		cat2 = *cat;
		std::cout << std::endl;
		delete cat;
		cat2.printIdea(50);
		std::cout << "cat2.getType() = " << cat2.getType() << std::endl;
		std::cout << "cat2.makeSound() = "; cat2.makeSound();
		std::cout << std::endl;
	}
}