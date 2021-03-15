#include    <iostream>

class       Contact{
    public:
        int         Create(int id);
    private:
        int         identifier;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_adress;
        std::string email_adress;
        std::string phone_number;
        std::string birthday_date;
        std::string fav_meal;
        std::string underwear_color;
        std::string darkest_secret;
};

int             Contact::Create(int id){
    identifier = id;
    return 0;
}
