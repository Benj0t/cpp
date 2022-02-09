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
/*
int main()
{
	{
		Form cn("Le Conseil National 2019", 10, 30);
		std::cout << cn;
		Bureaucrat jd("Julien Delohen", 5);
		std::cout << jd;
		jd.signForm(cn);
		std::cout << cn;
		jd.signForm(cn);
	}

	try
	{
		Form tooHigh("errorHigh", 0, 20);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form tooLow("errorLow", 10, 199);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	{
		Bureaucrat FrancoisJuno("francois", 5);
		Form song("l'an 1999", 1, 1);
		std::cout << FrancoisJuno;
		FrancoisJuno.signForm(song);
	}
}*/

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