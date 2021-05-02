/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:58:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 18:46:30 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form {
    public:
        Form( void );
        Form( std::string name, unsigned int gradeToSign, unsigned int gradeToExecute );
        Form( Form const & src );
        virtual ~Form( void );

        void                        setSigned( bool isSigned );
        std::string                 getName( void ) const;
        bool                        getSigned( void ) const;
        unsigned int                getGradeToSign( void ) const;
        unsigned int                getGradeToExecute( void ) const;

        void                        beSigned( Bureaucrat const & bureaucrat );
        void                        execute( Bureaucrat const & bureaucrat );
        virtual void                action( void ) const = 0;

        Form &                      operator=( Form const & rhs );

        class FormNotSignedException : public std::exception {
            public:
                virtual const char * what () const throw ();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char * what () const throw ();
        };

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw();
        };

    private:
        bool                        _signed;
        std::string const           _name;
        unsigned int const          _gradeToSign;
        unsigned int const          _gradeToExecute;
        void                        _checkGrades( void ) const;
};

std::ostream &     operator<<( std::ostream & o, Form const & src );

#endif