/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:28:23 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/07 15:33:10 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iomanip>
# include <map>
class Intern;
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

typedef Form*(Intern::*MakeFormFt)(std::string) const;

class Intern {
    public:
        Intern( void );
        Intern( Intern const & src );
        virtual ~Intern( void );

        Form *                                  makeForm( std::string name, std::string target );
        virtual Form *                          makeShrubberyCreation( std::string target ) const;
        virtual Form *                          makeRobotomyRequest( std::string target ) const;
        virtual Form *                          makePresidentialPardon( std::string target ) const;

        Intern &                                operator=( Intern const & rhs );

        class InternException : public std::exception {
            public:
                virtual const char * what () const throw ();
        };

    private:
        std::map< std::string, MakeFormFt >      _availableForms;
};

#endif