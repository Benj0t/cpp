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

#include <iostream>
#include <ctype.h>
#include <string>

int main(int argc, char **argv)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "&string    = " << &string << "\n";
	std::cout << "stringPTR  = " << stringPTR << "\n";
	std::cout << "&stringREF = " << &stringREF << "\n";

	std::cout << "string     = " << string << "\n";
	std::cout << "*stringPTR = " << *stringPTR << "\n";
	std::cout << "stringREF  = " << stringREF << "\n";	
}