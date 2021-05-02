/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:58:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 09:54:03 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat {
    public:
        Bureaucrat( void );
        Bureaucrat( std::string name, unsigned int grade );
        Bureaucrat( Bureaucrat const & src );
        virtual ~Bureaucrat( void );

        void                        setGrade( unsigned int input );
        std::string                 getName( void ) const;
        unsigned int                getGrade( void ) const;

        void                        incrementGrade( void );
        void                        decrementGrade( void );

        void                        signForm( Form * form ) const;
        void                        executeForm( Form * form ) const;

        Bureaucrat &                operator=( Bureaucrat const & rhs );

        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what () const throw ();
        };

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

    private:
        std::string const           _name;
        unsigned int                _grade;
};

std::ostream &     operator<<( std::ostream & o, Bureaucrat const & src );

#endif