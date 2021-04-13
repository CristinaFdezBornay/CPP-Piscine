/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:40:46 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/13 16:28:36 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    this->setSize(1500);
    this->setPercentageGreyMatter(55);
    return ;
}

Brain::~Brain( void ) {
    return ;
}

void            Brain::setSize( int size ) {
    this->_size = size;
    return ;
}

int             Brain::getSize( void ) const {
    return this->_size;
}

void            Brain::setPercentageGreyMatter( int percentageGreyMatter ) {
    this->_percentageGreyMatter = percentageGreyMatter;
    return ;
}

int             Brain::getPercentageGreyMatter( void ) const {
    return this->_percentageGreyMatter;
}

std::string     Brain::identify( void ) const {
    std::stringstream ss;
	std::string ret = "0x";

	ss << std::uppercase << std::hex << (unsigned long)this;
	ret.append(ss.str());
	return ret;
}