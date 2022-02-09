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
#include "WrongCat.hpp"

int main()
{
	{
		//Animal any;
		std::cout << std::endl;

		Dog *dog1 = new Dog();
		std::cout << std::endl;
		Dog dog2(*dog1);
		std::cout << std::endl;
		Dog dog3;
		dog3 = dog2;
		delete dog1;
		dog2.printIdea(100);
		std::cout << "dog2.getType() = " << dog2.getType() << std::endl;
		std::cout << "dog2.makeSound() = "; dog2.makeSound();
		std::cout << std::endl;
		dog3.printIdea(1);
		std::cout << "dog3.getType() = " << dog3.getType() << std::endl;
		std::cout << "dog3.makeSound() = "; dog3.makeSound();
	}
	std::cout << std::endl;
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
		cat3.printIdea(1);
		std::cout << "cat3.getType() = " << cat3.getType() << std::endl;
		std::cout << "cat3.makeSound() = "; cat3.makeSound();
	}
	std::cout << std::endl;
	{
		std::cout << std::endl;

		WrongCat *cat1 = new WrongCat();
		std::cout << std::endl;
		WrongCat cat2(*cat1);
		std::cout << std::endl;
		WrongCat cat3;
		cat3 = cat2;
		delete cat1;
		std::cout << "Wrongcat2.getType() = " << cat2.getType() << std::endl;
		std::cout << "Wrongcat2.makeSound() = "; cat2.makeSound();
		std::cout << std::endl;
		std::cout << "Wrongcat3.getType() = " << cat3.getType() << std::endl;
		std::cout << "Wrongcat3.makeSound() = "; cat3.makeSound();
	}
	std::cout << std::endl;
}