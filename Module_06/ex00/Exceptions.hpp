/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 18:04:48 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/23 10:21:48 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS
# define EXCEPTIONS

# include <iomanip>

class InputException : public std::exception {
    virtual const char * what () const throw ();
};

#endif