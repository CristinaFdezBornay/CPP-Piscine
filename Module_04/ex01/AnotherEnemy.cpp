/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherEnemy.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:57:56 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 13:00:26 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnotherEnemy.hpp"

AnotherEnemy::AnotherEnemy( void ) : Enemy( 1000, "AnotherEnemy" ) {
    std::cout << "* I AM IMBATTABLE *" << std::endl;
    return ;
}

AnotherEnemy::~AnotherEnemy( void ) {
    std::cout << "* ooopps I died :( *" << std::endl;
    return ;
}