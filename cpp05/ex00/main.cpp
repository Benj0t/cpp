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

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "----Test basic----" << std::endl;
	try{
		Bureaucrat b1("bob", 160);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}


	std::cout << "----Test exception too low----" << std::endl;
	try{
		Bureaucrat b1("Grezette1", 149);
		std::cout << b1.getName() << " is the first bureaucrat with a grade of : " <<b1.getGrade() << std::endl;
		std::cout << b1 << std::endl;
		b1.decrementGrade();
		std::cout << b1  << std::endl;
		b1.decrementGrade();
		std::cout << b1  << std::endl;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "----Test exception too high----" << std::endl;
	try{
		Bureaucrat b2("Grezette2", 2);
		std::cout << b2.getName() << " is the second bureaucrat with a grade of : " <<b2.getGrade() << std::endl;
		std::cout << b2  << std::endl;
		b2.incrementGrade();
		std::cout << b2  << std::endl;
		b2.incrementGrade();
		std::cout << b2  << std::endl;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}