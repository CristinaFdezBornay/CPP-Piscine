/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:03 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 18:00:07 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class       Zombie {
    public:
        Zombie( std::string name, std::string type );
        Zombie( std::string type );
        Zombie( void );
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