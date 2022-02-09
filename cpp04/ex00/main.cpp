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

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wa = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	const WrongCat* wcc = new WrongCat();
	std::cout << std::endl;
	const Animal toto(*j);
	const Animal titi = *i;
	std::cout << std::endl;
	std::cout << "GETTYPE TESTS" <<std::endl;
	std::cout << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wa->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	std::cout << wcc->getType() << " " << std::endl << std::endl;

	std::cout << "MAKESOUND TESTS" <<std::endl;
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wa->makeSound();
	wc->makeSound();
	wcc->makeSound();
	std::cout << std::endl;
	std::cout << "COPY + ASSIGNATION CONSTRUCTORS TESTS" <<std::endl;
	std::cout << std::endl;
	delete j; // delete the copy materials of titi and toto
	delete i;

	std::cout << std::endl;
	std::cout << toto.getType() << " " << std::endl;
	toto.makeSound();
	std::cout << titi.getType() << " " << std::endl;
	titi.makeSound();
	std::cout << std::endl;
	std::cout << "END OF THE TESTS" <<std::endl;
	std::cout << std::endl;
	delete meta;
	delete wa;
	delete wc;
	delete wcc;
}