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

#include "Contact.hpp"
#include "Phonebook.hpp"

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

std::string GetData(const char *type)
{
	std::string input;

	std::cout << type;
	std::getline (std::cin, input);
	if (std::cin.eof())
		return (input);
	while (!isString(input) || !input[0])
	{
		std::cout << "Erreur, veuillez reessayer\n";
		std::cout << type;
		std::getline (std::cin, input);
		if (std::cin.eof())
			return (input);
	}
	return (input);
}

std::string GetNumberData(const char *type)
{
	std::string input;

	std::cout << type;
	std::getline (std::cin, input);
	if (std::cin.eof())
		return (input);
	while (!isNumber(input) || !input[0])
	{
		std::cout << "Erreur, veuillez reessayer\n";
		std::cout << type;
		std::getline (std::cin, input);
		if (std::cin.eof())
			return (input);
	}
	return (input);
}

Contact	add_Contact(void)
{
	Contact cont;

	cont.SetFirstName(GetData("Prenom: "));
	if (cont.GetFirstName().empty())
		return (cont);
	cont.SetLastName(GetData("Nom de famille: "));
	if (cont.GetLastName().empty())
		return (cont);
	cont.SetNickName(GetData("Surnom: "));
	if (cont.GetNickName().empty())
		return (cont);
	cont.SetPhone(GetNumberData("Telephone: "));
	if (cont.GetPhone().empty())
		return (cont);
	cont.SetSecret(GetData("Secret: "));
	if (cont.GetSecret().empty())
		return (cont);
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

void	printIndex(Phonebook book, int nb)
{
	std::cout << "firstname: " << book.GetContact(nb).GetFirstName() << std::endl;
	std::cout << "lastname : " << book.GetContact(nb).GetLastName() << std::endl;
	std::cout << "nickname : " << book.GetContact(nb).GetNickName() << std::endl;
	std::cout << "phone    : " << book.GetContact(nb).GetPhone() << std::endl;
	std::cout << "secret   : " << book.GetContact(nb).GetSecret() << std::endl;
}

int	print_book(Phonebook book, int nb)
{
	int len;
	int i;
	std::string str;
	Contact tmp;

	if (!nb)
	{
		std::cout << "No contacts registered yet !" << std::endl;
		return 0;
	}
	i = 0;
	while (i < nb)
	{
		tmp = book.GetContact(i);
		std::cout << "| ";
		std::cout << i + 1;
		std::cout << " |";
		len = tmp.GetFirstName().length();
		if (len > 10)
			limited_print(tmp.GetFirstName());
		if (len < 10)
			spaced_print(tmp.GetFirstName(), len);
		std::cout << '|';
		len = tmp.GetLastName().length();
		if (len > 10)
			limited_print(tmp.GetLastName());
		if (len < 10)
			spaced_print(tmp.GetLastName(), len);
		std::cout << '|';
		len = tmp.GetNickName().length();
		if (len > 10)
			limited_print(tmp.GetNickName());
		if (len < 10)
			spaced_print(tmp.GetNickName(), len);
		std::cout << '|';
		i++;
		std::cout << '\n';
	}
	std::cout << "Index du contact:";
	std::getline (std::cin, str);
	if (std::cin.eof())
		return 1;
	while (!isNumber(str) || (int)str[0] > nb + 48 || (int)str[0] <= 48 || str.length() > 1)
	{
		std::cout << "Erreur, veuillez reessayer\n";
		std::cout << "Index du contact:";
		std::getline (std::cin, str);
		if (std::cin.eof())
			return 1;
	}
	printIndex(book, ((int)str[0] - '0') - 1);
	return 0;
}

int	CheckDatas(Contact cont)
{
	if (cont.GetFirstName().empty() || cont.GetLastName().empty() || \
		cont.GetFirstName().empty() || cont.GetNickName().empty() || \
		cont.GetPhone().empty() || cont.GetSecret().empty())
		return (1);
	return (0);
}

int main()
{
	int nb;

	nb = 0;
	Phonebook book;
	std::string input;

	std::cout << ">";
	std::getline (std::cin, input);
	if (std::cin.eof())
		return 1;
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD") == 0)
		{
			if (nb > 7)
				std::cout << "Phonebook deja plein\n";
			else
			{
				book.SetContact(nb, add_Contact());
				if (CheckDatas(book.GetContact(nb++)))
					return (1);
			}
		}
		if (input.compare("SEARCH") == 0)
			if (print_book(book, nb))
				return 1;
		std::cout << ">";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return 1;
	}
	std::cout << "A la prochaine fois, camarade !" << std::endl;
}