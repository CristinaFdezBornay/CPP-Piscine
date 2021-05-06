/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:36:08 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/06 13:14:56 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_HPP
# define PRESIDENTIAL_PARDON_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm( std::string target );
        virtual ~PresidentialPardonForm( void );
    
        std::string const       getTarget( void ) const;
        void                    action( void ) const;

    private:
        PresidentialPardonForm( void );
        std::string const           _target;
};

#endif