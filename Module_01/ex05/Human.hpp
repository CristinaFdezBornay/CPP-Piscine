#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class       Human {
    public:
        Human( void );
        ~Human( void );

        const Brain     &getBrain( void ) const;
        std::string     identify( void ) const;

    private:
        Brain const     _brain;
};

#endif