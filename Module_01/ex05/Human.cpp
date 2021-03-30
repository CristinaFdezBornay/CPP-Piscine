/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:16 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:43:17 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void ) : _brain() {
    return;
}

Human::~Human( void ) {
    return;
}

const Brain     &Human::getBrain( void ) const {
    return this->_brain;
}

std::string     Human::identify( void ) const {
    return this->_brain.identify();
}