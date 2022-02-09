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
		Form constitution("l'an 1999", 1, 1);
		Bureaucrat leonid("francis", 5);
		std::cout << leonid;
		leonid.signForm(constitution);
	}
}*/


int main()
{
	Bureaucrat b1("Grezette", 149);
	Bureaucrat b2("Zafod", 2);
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

	{
		std::cout << std::endl << "----Test ShrubberyCreationForm form----" << std::endl;
		Form *f1 = new ShrubberyCreationForm("home");
		std::cout << *f1 << std::endl;
		try{
			f1->execute(b1);
		} catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		b1.signForm(*f1);
		b2.signForm(*f1);
		b1.executeForm(*f1);
		b2.executeForm(*f1);
		delete f1;
	}
	{
		std::cout << std::endl << "----Test RobotomyRequestForm form----" << std::endl;
		Form *f1 = new RobotomyRequestForm("elevator");
		std::cout << *f1 << std::endl;
		try{
			f1->execute(b1);
		} catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		b1.signForm(*f1);
		b2.signForm(*f1);
		b1.executeForm(*f1);
		b2.executeForm(*f1);
		delete f1;
	}
	{
		std::cout << std::endl << "----Test PresidentialPardonForm form----" << std::endl;
		Form *f1 = new PresidentialPardonForm("Grezette");
		std::cout << *f1 << std::endl;
		try{
			f1->execute(b1);
		} catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		b1.signForm(*f1);
		b2.signForm(*f1);
		b1.executeForm(*f1);
		b2.executeForm(*f1);
		delete f1;
	}
}