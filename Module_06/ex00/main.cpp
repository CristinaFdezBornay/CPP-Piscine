/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:05:40 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/23 15:07:05 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

int     main( int argc, char **argv ) {
    if (argc == 1)
        return 1;
    try {
        Conversion      *conversion = new Conversion( argv[1] );
        int             type;

        type = conversion->detectType();
        conversion->convert(type);
        conversion->print();
        delete conversion;
        return 0;
    } catch ( std::exception & e ) {
	    std::cout << e.what() << std::endl;
    }
}