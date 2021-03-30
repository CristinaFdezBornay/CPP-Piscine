/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:41:37 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:41:37 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int     doSomeFunnyStuff(Pony *pony) {
    std::string     action;
    std::string     km;

    std::cout << "\nWhat do you want your baby pony " << pony->getName() << " to do [RUN, EAT, DIE]:" << std::endl;
    std::getline (std::cin,action);
    if (action == "RUN" or action == "1") {
        std::cout << "How many km is " << pony->getName() << " going to run ?" << std::endl;
        std::getline (std::cin,km);
        pony->run(km);
        return doSomeFunnyStuff( pony );
    }
    else if (action == "EAT" or action == "2") {
        pony->eat_carrots();
        return doSomeFunnyStuff( pony );
    }
    else if (action == "EXIT" or action == "3")
        return 0;
    else {
        std::cout << "\nPlease introduce one of the available actions!\n" << std::endl;
        return doSomeFunnyStuff( pony );
    }
    return 1;
}

int     ponyOnTheStack( std::string input ) {
    Pony    pony = Pony(input);

    if ( doSomeFunnyStuff( &pony ) == 0) {
        std::cout << "Oh no you want to kill " << pony.getName() << std::endl;
        std::cout << "But " << pony.getName() << " is a free pony !!" << std::endl;
        std::cout << pony.getName() << " will die whenever it wants, or at the end of this function... " << std::endl;
        return 0;
    } else {
        std::cout << "\n\nThere's been an error ]\n\n" << std::endl;
        return 1;
    }
    return 1;
}

int     ponyOnTheHeap( std::string input ) {
    Pony *pony = new Pony(input);

    if ( doSomeFunnyStuff( pony ) == 0 ) {
        std::cout << "Oh no you want to kill " << pony->getName() << std::endl;
        std::cout << "I'll delete the pony..." << std::endl;
        delete pony;
        return 0;
    } else {
        std::cout << "\n\nThere's been an error ]\n\n" << std::endl;
        return 1;
    }
    return 1;
}

int     main( void ){
    int             ponyStack;
    int             ponyHeap;
    std::string     input;

    std::cout << "\n\nIntroduce your the name of your Pony on the Heap:" << std::endl;
    std::getline( std::cin, input );
    ponyHeap = ponyOnTheHeap( input );
    std::cout << "\n\nIntroduce your the name of your Pony on the Stack:" << std::endl;
    std::getline( std::cin, input );
    ponyStack = ponyOnTheStack( input );
    if ( ponyStack == 0 and ponyHeap == 0 ) {
        std::cout << "\nWe've reached the end of the program !\n\n" << std::endl;
        std::cout << "Sadly both ponies are dead...\n\n" << std::endl;
        return 0;
    }
    return 1;
}