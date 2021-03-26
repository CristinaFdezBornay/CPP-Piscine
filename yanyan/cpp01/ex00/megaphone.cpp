/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:16:01 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/07 15:51:29 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

void	print_toupper(char *str)
{
	while (*str != '\0')
		std::cout << toupper(*(str++));
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 0;
		while (++i < argc)
			print_toupper(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}
