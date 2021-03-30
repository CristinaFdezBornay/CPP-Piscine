/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:42:33 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/30 13:42:34 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class       Zombie {
    public:
        Zombie( std::string name, std::string type );
        Zombie( std::string type );
        ~Zombie( void );

        void        setName( std::string name );
        void        setType( std::string type );
        std::string getName( void ) const;
        std::string getType( void ) const;

        void        announce( void ) const;

    private:
        std::string _name;
        std::string _type;
};

#endif