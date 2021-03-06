/* ************************************************************************** */
/*	                                                                          */
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
	Bureaucrat b1("Grezette1", 149);
	Bureaucrat b2("Grezette2", 2);
	std::cout << "----Test exception too low----" << std::endl;
	try{
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
		std::cout << b2.getName() << " is the second bureaucrat with a grade of : " <<b2.getGrade() << std::endl;
		std::cout << b2  << std::endl;
		b2.incrementGrade();
		std::cout << b2  << std::endl;
		b2.incrementGrade();
		std::cout << b2  << std::endl;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "----Test sign form----" << std::endl;
	Form f1("form1", 50, 40);
	Form f2("form2", 2, 10);
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	try{
		f1.beSigned(b1);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	b1.signForm(f1);
	b2.signForm(f1);
	b2.signForm(f2);
	std::cout << b2 << std::endl;
	b2.decrementGrade();
	b2.decrementGrade();
	b2.signForm(f2);
	std::cout << b2 << std::endl;
}