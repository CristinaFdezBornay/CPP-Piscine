/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 20:36:13 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/17 16:15:27 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AnotherMateria.hpp"
#include "MateriaSource.hpp"

void    test( IMateriaSource *src ) {
    Character*         me = new Character("me");

    src->learnMateria( new AnotherMateria() );

    me->equip( src->createMateria("cure") );
    me->equip( src->createMateria("ice") );
    me->equip( src->createMateria("Another Materia") );
    me->equip( src->createMateria("Another Materia") );
    me->equip( src->createMateria("ice") );
    std::cout << "Character me type of materias:" << std::endl;
    for ( int i = 0; i < 4; ++i ) {
        if (me->getMateria(i))
            std::cout << "[ " << i << " ] " << me->getMateria(i)->getType() << "  -->   " << me->getMateria(i) << std::endl;
        else
            std::cout << "[ " << i << " ] Empty" << std::endl;
    }
    me->unequip(2);
    std::cout << "Character me type of materias (after unequip 2):" << std::endl;
    for ( int i = 0; i < 4; ++i ) {
        if (me->getMateria(i))
            std::cout << "[ " << i << " ] " << me->getMateria(i)->getType() << "  -->   " << me->getMateria(i) << std::endl;
        else
            std::cout << "[ " << i << " ] Empty" << std::endl;
    }
    me->equip( src->createMateria("ice") );
    std::cout << "Character me type of materias (after equip with ice):" << std::endl;
    for ( int i = 0; i < 4; ++i ) {
        if (me->getMateria(i))
            std::cout << "[ " << i << " ] " << me->getMateria(i)->getType() << "  -->   " << me->getMateria(i) << std::endl;
        else
            std::cout << "[ " << i << " ] Empty" << std::endl;
    }
    delete me;
}

void    check_args_and_run_test( int argc, char **argv, IMateriaSource *src ) {
    if ( argc == 1 or argv[1][0] != 't' )
        return ;
    std::cout << std::endl;
    std::cout << "============================= EXTRA TESTS =============================" << std::endl;
    test( src );
    std::cout << "=======================================================================" << std::endl;
    std::cout << std::endl;
}

int     main( int argc, char **argv ) {
    IMateriaSource*     src = new MateriaSource();

    src->learnMateria( new Ice() );
    src->learnMateria( new Cure() );

    ICharacter*         me = new Character("me");
    AMateria*           tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);


    ICharacter*         bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;

    check_args_and_run_test( argc, argv, src );

    delete src;

    return 0;
}
