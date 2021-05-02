/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 08:36:08 by crfernan          #+#    #+#             */
/*   Updated: 2021/05/02 09:21:19 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_HPP
# define ROBOTOMY_REQUEST_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm( std::string target );
        virtual ~RobotomyRequestForm( void );

        void        action( void ) const;

    private:
        RobotomyRequestForm( void );
        std::string const           _target;
};

#endif