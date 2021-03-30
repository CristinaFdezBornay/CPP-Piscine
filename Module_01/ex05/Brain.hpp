/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:14 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:43:14 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
#include <sstream>

class       Brain {
    public:
        Brain( void );
        ~Brain( void );

        void            setSize( int size );
        int             getSize( void ) const;
        void            setPercentageGreyMatter( int percentageGreyMatter );
        int             getPercentageGreyMatter( void ) const;

        std::string     identify( void ) const;
    
    private:
        int     _size;
        int     _percentageGreyMatter;
};

#endif