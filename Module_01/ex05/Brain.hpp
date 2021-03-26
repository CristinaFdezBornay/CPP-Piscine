#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
#include <sstream>

class       Brain {
    public:
        Brain( void );
        ~Brain( void );

        void            setSize( int size );
        int             getSize( void ) const;
        void            setPercentageGreyMatter( int percentageGreyMatter );
        int             getPercentageGreyMatter( void ) const;

        std::string     identify( void ) const;
    
    private:
        int     _size;
        int     _percentageGreyMatter;
};

#endif