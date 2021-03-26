/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 17:55:04 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/07 23:37:17 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main(void)
{
	Contact		peaple[8];
	std::string	cmd;
	int			index;

	index = 0;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
		if (cmd == "ADD")
			if (index < 8)
				add_info(&peaple[index++]);
			else
				std::cout << "| No space left" << std::endl;
		else if (cmd == "SEARCH")
			put_info(peaple, index);
		else if (cmd == "EXIT")
			break ;
		else if (cmd.empty() == false)
			std::cout << "| Unknown command `" << cmd << "`" << std::endl;
	}
}
