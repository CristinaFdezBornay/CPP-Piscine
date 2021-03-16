#include    <iostream>

class       Contact{
    public:
        int         Create(int id);
        bool        does_exist(int id);
        int         print_general_information();
        int         print_complete_information();
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
        std::string format_information(std::string information);
};

int             Contact::Create(int id){
    identifier = id;
    std::cout << "Introduce your first name:" << std::endl;
    std::getline (std::cin,first_name);
    std::cout << "Introduce your last name:" << std::endl;
    std::getline (std::cin,last_name);
    std::cout << "Introduce your nickname:" << std::endl;
    std::getline (std::cin,nickname);
    std::cout << "Introduce your login:" << std::endl;
    std::getline (std::cin,login);
    std::cout << "Introduce your postal address:" << std::endl;
    std::getline (std::cin,postal_adress);
    std::cout << "Introduce your email address:" << std::endl;
    std::getline (std::cin,email_adress);
    std::cout << "Introduce your phone number:" << std::endl;
    std::getline (std::cin,phone_number);
    std::cout << "Introduce your birthday date:" << std::endl;
    std::getline (std::cin,birthday_date);
    std::cout << "Introduce your favourite meal:" << std::endl;
    std::getline (std::cin,fav_meal);
    std::cout << "Introduce your underwear color:" << std::endl;
    std::getline (std::cin,underwear_color);
    std::cout << "Introduce your darkest secret:" << std::endl;
    std::getline (std::cin,darkest_secret);
    return 0;
}

bool            Contact::does_exist(int id){
    if (id == identifier)
        return true;
    return false;
}

std::string     Contact::format_information(std::string information) {
    int         len = int(information.length());
    std::string formatted_information = "";

    if (len > 10) {
        formatted_information.append(information, 0, 9);
        formatted_information += '.';
        return formatted_information;
    }
    for (int i = 0; i < 10 - len; ++i)
        formatted_information += ' ';
    formatted_information.append(information, 0, len);
    return formatted_information;
}

int                 Contact::print_general_information() {
    std::string     general_information = "| ";

    general_information += identifier + '0';
    general_information += " |";
    general_information += format_information(first_name);
    general_information += "|";
    general_information += format_information(last_name);
    general_information += "|";
    general_information += format_information(nickname);
    general_information += "|";
    std::cout << general_information << std::endl;
    return 0;
}

int                 Contact::print_complete_information(){
    std::string     complete_information = "\nINFORMATION -> ID : ";

    complete_information += identifier + '0';
    complete_information += "\nFirst Name        : ";
    complete_information += first_name;
    complete_information += "\nLast Name         : ";
    complete_information += last_name;
    complete_information += "\nNickname          : ";
    complete_information += nickname;
    complete_information += "\nLogin             : ";
    complete_information += login;
    complete_information += "\nPostal Address    : ";
    complete_information += postal_adress;
    complete_information += "\nEmail Address     : ";
    complete_information += email_adress;
    complete_information += "\nPhone number      : ";
    complete_information += phone_number;
    complete_information += "\nBirthdate         : ";
    complete_information += birthday_date;
    complete_information += "\nFavourite meal    : ";
    complete_information += fav_meal;
    complete_information += "\nUnderwear color   : ";
    complete_information += underwear_color;
    complete_information += "\nDarkest Secret    : ";
    complete_information += darkest_secret;
    std::cout << complete_information << std::endl;
    return 0;
}