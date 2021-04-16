/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 23:22:32 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/12 16:42:25 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy( void ) {
    return ;
}

Enemy::Enemy( int hp, std::string const & type ) : _type( type ), _hitPoints( hp ){
    return ;
}

Enemy::Enemy( Enemy const & rhs ) {
    *this = rhs;
    return ;
}

Enemy::~Enemy( void ) {
    return ;
}

void            Enemy::setType( std::string input ) {
    this->_type = input;
    return ;
}

void            Enemy::setHitPoints( int input ) {
    this->_hitPoints = input;
    return ;
}

std::string     Enemy::getType( void ) const {
    return this->_type;
}

int             Enemy::getHitPoints( void ) const {
    return this->_hitPoints;
}

Enemy &         Enemy::operator=( Enemy const & rhs ) {
    if ( this == &rhs ) 
        return *this;
    this->setType( rhs.getType() );
    this->setHitPoints( rhs.getHitPoints() );
    return *this;
}

void            Enemy::takeDamage( int damage ) {
    if ( damage <= 0 )
        return ;
    this->setHitPoints( this->getHitPoints() - damage );
    return ;
}