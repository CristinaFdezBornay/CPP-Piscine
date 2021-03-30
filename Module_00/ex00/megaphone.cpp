/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:41:07 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:41:09 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <iostream>

std::string     capitalize(std::string string){
    std::string     capitalized_string = "";
    for (unsigned long i = 0; i < string.length(); ++i) {
        if (string[i] >= 'a' && string[i] <= 'z')
            capitalized_string += string[i] + 'A' - 'a';
        else
            capitalized_string += string[i];
    }
    return capitalized_string;
}

std::string     get_final_string(int argc, char **argv) {
    std::string final_string = "";

    for (int i = 1; i < argc; ++i)
        final_string.append(capitalize(argv[i]));
    if (final_string == "")
        final_string.append("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    return final_string;
}

int         main(int argc, char **argv) {
    std::cout << get_final_string(argc, argv) << std::endl; 
    return 0; 
}