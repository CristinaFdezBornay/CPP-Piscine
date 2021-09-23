/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:58:27 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/23 16:49:16 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <map>
# include <regex>
# include <iostream>
# include "Exceptions.hpp"

# define CHAR           0
# define INT            1
# define FLOAT          2
# define DOUBLE         3

# define REGEX_CHAR     "^[a-z]{1}$"
# define REGEX_INT      "^-?[0-9]+$"
# define REGEX_FLOAT    "^-?[0-9]+([.][0-9]+)?f{1}$|^nanf$|^[+]inff$|^-inff$"
# define REGEX_DOUBLE   "^-?[0-9]+[.][0-9]+$|^nan$|^[+]inf$|^-inf$"

# define FLOAT_MIN      std::numeric_limits<float>::min()
# define FLOAT_MAX      std::numeric_limits<float>::max()
# define DOUBLE_MIN     std::numeric_limits<double>::min()
# define DOUBLE_MAX     std::numeric_limits<double>::max()

class Conversion;

typedef void(Conversion::*ConvertFt)(void);
typedef void(Conversion::*PrintFt)(void);

class Conversion {
    public:
        Conversion( std::string input );
        virtual ~Conversion( void );

        int             detectType( void );

        void            convertChar( void );
        void            convertInt( void );
        void            convertFloat( void );
        void            convertDouble( void );
        void            convert( int );

        void            printChar( void );
        void            printInt( void );
        void            printFloat( void );
        void            printDouble( void );

        void            print( void );

    private:
        Conversion( void );
        Conversion( Conversion const & src );

        int         _precision;
        std::string _raw_input;

        char        _c;
        int         _i;
        float       _f;
        double      _d;

        struct      conversion_types
        {
            std::string     type;
            std::string     regex;
            ConvertFt       ft_convert;
            long double     min;
            long double     max;
            PrintFt         ft_print;
        }           _conversion_types[4];
};

std::ostream &     operator<<( std::ostream & o, Conversion const & src );

#endif