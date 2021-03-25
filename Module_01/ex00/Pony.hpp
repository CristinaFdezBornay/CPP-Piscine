#ifndef PONY_H
# define PONY_H

# include <iostream>

class       Pony {
    public:
        Pony( std::string name );
        ~Pony( void );

        void        setName( std::string name );
        std::string getName( void ) const;

        void        setNumberCarrotsEaten( int carrots );
        int         getNumberCarrotsEaten( void ) const;

        void        run( std::string distance ) const;
        void        eat_carrots( void );

    private:
        std::string _name;
        int         _numberCarrotsEaten;
};

#endif