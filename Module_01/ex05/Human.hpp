/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 13:43:19 by crfernan          #+#    #+#             */
/*   Updated: 2021/03/31 18:00:07 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class       Human {
    public:
        Human( void );
        ~Human( void );

        const Brain     &getBrain( void ) const;
        std::string     identify( void ) const;

    private:
        Brain const     _brain;
};

#endif