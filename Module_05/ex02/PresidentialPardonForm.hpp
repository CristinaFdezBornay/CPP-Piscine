/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:36:08 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 09:49:43 by crfernan         ###   ########.fr       */
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

        void        action( void ) const;

    private:
        PresidentialPardonForm( void );
        std::string const           _target;
};

#endif