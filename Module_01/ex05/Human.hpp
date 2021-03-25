#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class       Human {
    public:
        Human( void );
        ~Human( void );

        void            setBrain( Brain brain);
        Brain           &getBrain( void ) const;

        std::string     identify();

    private:
        const Brain     *_brain;
};

#endif