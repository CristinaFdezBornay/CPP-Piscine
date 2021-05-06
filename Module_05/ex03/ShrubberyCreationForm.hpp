/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:36:08 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/06 12:33:23 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_HPP
# define SHRUBBERY_CREATION_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm( std::string target );
        virtual ~ShrubberyCreationForm( void );
    
        std::string const       getTarget( void ) const;
        void                    action( void ) const;

        class ShrubberyException : public std::exception {
            public:
                virtual const char * what () const throw ();
        };
    
    private:
        ShrubberyCreationForm( void );
        std::string const           _target;
};

#endif