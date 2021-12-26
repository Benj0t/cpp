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
#include <iomanip>
#include <cstring>
#include "main.hpp"



bool	isNumber(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (std::isdigit(str[i++]) == 0)
			return (false);
	}
	return (true);
}

bool	isString(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (std::isalpha(str[i++]) == 0)
			return (false);
	}
	return (true);
}

Contact	add_Contact(void)
{
	Contact cont;
	std::cout << "Prenom:";
	std::getline (std::cin, cont.firstname);
	while (!isString(cont.firstname) || !cont.firstname[0])
	{
		std::cout << "Erreur, veuillez reessayer\n";
		std::cout << "Prenom:";
		std::getline (std::cin, cont.firstname);
	}
	std::cout << "Nom de famille:";
	std::getline (std::cin, cont.lastname);
	while (!isString(cont.lastname) || !cont.lastname[0])
	{
		std::cout << "Erreur, veuillez reessayer\n";
		std::cout << "Nom de Famille:";
		std::getline (std::cin, cont.lastname);
	}
	std::cout << "Surnom:";
	std::getline (std::cin, cont.nickname);
	while (!cont.nickname[0])
	{
		std::cout << "Erreur, veuillez reessayer\n";
		std::cout << "Surnom:";
		std::getline (std::cin, cont.nickname);
	}
	std::cout << "Telephone:";
	std::getline (std::cin, cont.phone);
	while (!isNumber(cont.phone) || !cont.phone[0] || cont.phone.length() != 10)
	{
		std::cout << "Erreur, veuillez reessayer\n";
		std::cout << "Telephone:";
		std::getline (std::cin, cont.phone);
	}
	std::cout << "Secret:";
	std::getline (std::cin, cont.secret);
	while (!cont.secret[0])
	{
		std::cout << "Erreur, veuillez reessayer\n";
		std::cout << "Secret:";
		std::getline (std::cin, cont.secret);
	}
	return (cont);
}

void	limited_print(std::string str)
{
	int i;

	i = 0;
	while (str[i] && i < 9)
		std::cout << str[i++];
	if (i == 9)
		std::cout << '.';
}

void	spaced_print(std::string str, int len)
{
	int i;

	i = 0;
	while (len++ < 10)
		std::cout << ' ';
	while (str[i])
		std::cout << str[i++];
}

void	print_book(Contact book[8], int nb)
{
	int len;
	int i;

	if (!nb)
		return ;
	i = 0;
	while (i < nb)
	{
		std::cout << "| ";
		std::cout << i + 1;
		std::cout << " |";
		len = book[i].firstname.length();
		if (len > 10)
			limited_print(book[i].firstname);
		if (len < 10)
			spaced_print(book[i].firstname, len);
		std::cout << '|';
		len = book[i].lastname.length();
		if (len > 10)
			limited_print(book[i].lastname);
		if (len < 10)
			spaced_print(book[i].lastname, len);
		std::cout << '|';
		len = book[i].nickname.length();
		if (len > 10)
			limited_print(book[i].nickname);
		if (len < 10)
			spaced_print(book[i].nickname, len);
		std::cout << '|';
		i++;
		std::cout << '\n';
	}
}

int main()
{
	int nb;

	nb = 0;
	Phonebook book;
	std::string input;

	std::cout << ">";
	std::getline (std::cin, input);
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
		{
			if (nb > 7)
				std::cout << "Phonebook deja plein\n";
			else
			{
				book.contacts[nb++] = add_Contact();
			}
		}
		if (input.compare("SEARCH") == 0)
			print_book(book.contacts, nb);
		std::cout << ">";
		std::getline(std::cin, input);
	}
}