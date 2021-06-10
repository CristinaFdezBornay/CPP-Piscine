/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnotherEnemy.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:11:44 by crfernan          #+#    #+#             */
/*   Updated: 2021/06/10 12:58:53 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANOTHERENEMY_HPP
# define ANOTHERENEMY_HPP

# include <iostream>
# include "Enemy.hpp"

class       AnotherEnemy : public Enemy {
    public:
        AnotherEnemy( void );
        virtual ~AnotherEnemy( void );
};

#endif