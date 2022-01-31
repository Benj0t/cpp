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

int main(int argc, char **argv)
{
	std::string buffer;
	std::string file;
	std::string s1;
	std::string s2;
	unsigned long pos;

	if (argc != 4)
	{
		std::cout << "Error\n./sed [filename] [string_to_replace] [replacement_string]" << std::endl;
		return 1;
	}
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (file.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error\nArguments must not be empty strings" << std::endl;
		return (1);
	}
	if (s2.find(s1) != std::string::npos)
	{
		std::cout << "Error\ns1 must not be found in s2" << std::endl;
		return (1);
	}
	std::ifstream source;
	source.open(file.c_str());
	if (!source.is_open())
	{
		std::cout << "Can't open file\n";
		return 1;
	}
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