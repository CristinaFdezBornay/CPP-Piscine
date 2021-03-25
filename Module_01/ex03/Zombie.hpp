#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class       Zombie {
    public:
        Zombie( std::string name, std::string type );
        Zombie( std::string type );
        Zombie( void );
        ~Zombie( void );

        void        setName( std::string name );
        void        setType( std::string type );
        std::string getName( void ) const;
        std::string getType( void ) const;

        void        announce( void ) const;

    private:
        std::string _name;
        std::string _type;
};

#endif