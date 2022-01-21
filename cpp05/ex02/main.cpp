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
}