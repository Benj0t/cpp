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
#include <fstream>
#include <string>

int main()
{
	std::string buffer;
	std::string file;
	std::string s1;
	std::string s2;
	unsigned long pos;

	std::cout << "Nom du fichier a modifier: ";
	std::cin >> file;
	std::ifstream source;
	source.open(file.c_str());
	if (!source.is_open())
	{
		std::cout << "Can't open file\n";
		return 1;
	}
	std::cout << "String a remplacer: ";
	std::cin >> s1;
	std::cout << "Remplacer par: ";
	std::cin >> s2;
	file += ".replace";
	std::ofstream destination;
	destination.open(file.c_str());
	if (!destination.is_open())
	{
		std::cout << "Can't create file\n";
		return 1;
	}
	while (std::getline(source, buffer))
	{
		while ((pos = buffer.find(s1)) != std::string::npos)
		{
			buffer.erase(pos, s1.length());
			buffer.insert(pos, s2);
		}
		destination << buffer << '\n';
	}
	source.close();
	destination.close();
}