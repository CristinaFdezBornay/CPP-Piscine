/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:05:40 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/24 16:02:29 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conversion.hpp"

int     main( int argc, char **argv ) {
    if (argc == 1)
        return 1;
    try {
        Conversion      *conversion = new Conversion( argv[1] );

        conversion->detectType();
        conversion->convert();
        conversion->print();

        delete conversion;
        return 0;
    } catch ( Conversion::InputException & e ) {
	    std::cout << e.what() << std::endl;
    } catch ( Conversion::NastyException & e ){
	    std::cout << e.what() << std::endl;
    }
}