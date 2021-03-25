#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class       Contact{

    public:
        int         Add();
        int         print_general_information() const;
        int         print_complete_information() const;
        void        setIdentifier( int input );
        void        setFirst_name( std::string input );
        void        setLast_name( std::string input );
        void        setNickname( std::string input );
        void        setLogin( std::string input );
        void        setPostal_adress( std::string input );
        void        setEmail_adress( std::string input );
        void        setPhone_number( std::string input );
        void        setBirthday_date( std::string input );
        void        setFav_meal( std::string input );
        void        setUnderwear_color( std::string input );
        void        setDarkest_secret( std::string input );
        int         getIdentifier( void ) const ;
        std::string getFirst_name( void ) const ;
        std::string getLast_name( void ) const ;
        std::string getNickname( void ) const ;
        std::string getLogin( void ) const ;
        std::string getPostal_adress( void ) const ;
        std::string getEmail_adress( void ) const ;
        std::string getPhone_number( void ) const ;
        std::string getBirthday_date( void ) const ;
        std::string getFav_meal( void ) const ;
        std::string getUnderwear_color( void ) const ;
        std::string getDarkest_secret( void ) const ;

        static void setNumber_contacts( int input );
        static int  getNumber_contacts( void );

    private:
        int         _identifier;
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _login;
        std::string _postal_adress;
        std::string _email_adress;
        std::string _phone_number;
        std::string _birthday_date;
        std::string _fav_meal;
        std::string _underwear_color;
        std::string _darkest_secret;
        std::string _format_information(std::string information) const;

        static int  _number_contacts;
};

#endif