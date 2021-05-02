/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:36:08 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 09:49:49 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_HPP
# define SHRUBBERY_CREATION_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm( std::string target );
        virtual ~ShrubberyCreationForm( void );

        void        action( void ) const;

    private:
        ShrubberyCreationForm( void );
        std::string const           _target;
};

#endif