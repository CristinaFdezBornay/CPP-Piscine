/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 19:48:18 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/07 23:37:00 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add_info(Contact *elem)
{
	std::string	content;
	std::string	arr[] = {"first name", "last name", "nick name", "login", "postal address", "email adress", "phone number", "birthday date", "favorite meal", "underwear color", "darkest secret"};
	int			i;

	i = -1;
	std::cout << "| Adding new contact" << std::endl;
	while (++i <= 10)
	{
		std::cout << "| - " << arr[i] << ": ";
		std::getline(std::cin, content);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			exit (0);
		}
		(*elem).addField(i, content);
	}
	std::cout << "| Contact Added" << std::endl;
}

void	put_info(Contact peaple[8], int index)
{
	int			i;
	int			j;
	std::string	elem;
	std::string	arr[] = {"first name", "last name", "nick name", "login", "postal address", "email adress", "phone number", "birthday date", "favorite meal", "underwear color", "darkest secret"};

	if (index != 0)
	{
		i = -1;
		std::cout << "|" << std::setfill('-') << std::setw(52) << "|" << std::endl;
		std::cout << "| ";
		std::cout << std::setfill(' ') << std::setw(10) << "index" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Prenom" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "Nom" << " | ";
		std::cout << std::setfill(' ') << std::setw(10) << "pseudo" << " |" << std::endl;
		while (++i < index)
		{
			j = -1;
			std::cout << "| " << std::setfill(' ') << std::setw(10) << i << " | ";
			while (++j < 3)
			{
				elem = peaple[i].getField(j);
				if (elem.size() > 10)
				{
					elem.resize(9);
					elem += ".";
				}
				std::cout << std::setw(10) << elem << " | ";
			}
			std::cout << std::endl;
		}
		std::cout << "|" << std::setfill('-') << std::setw(52) << "|" << std::endl;
		std::cout << "| Enter index: ";
		if ((std::cin >> i).eof())
		{
			std::cout << std::endl;
			exit (0);
		}
		if (std::cin.good() && i >= 0 && i <= index - 1)
		{
			j = -1;
			while (++j <= 10)
				std::cout << "| - " << arr[j] << ": " << peaple[i].getField(j) << std::endl;
		}
		else
		{
			std::cin.clear();
			std::cout << "| Invalid index" << std::endl;
		}
		std::cin.ignore(10000, '\n');
	}
	else
		std::cout << "| No entry" << std::endl;
}
