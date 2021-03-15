#include    <iostream>

class       Contact{
    public:
        int         Create(int id);
        int         print_general_information();
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
    std::cin >> first_name;
    std::cout << "Introduce your last name:" << std::endl;
    std::cin >> last_name;
    std::cout << "Introduce your nickname:" << std::endl;
    std::cin >> nickname;
    // std::cout << "Introduce your login:" << std::endl;
    // std::cin >> login;
    // std::cout << "Introduce your postal address:" << std::endl;
    // std::cin >> postal_adress;
    // std::cout << "Introduce your email address:" << std::endl;
    // std::cin >> email_adress;
    // std::cout << "Introduce your phone number:" << std::endl;
    // std::cin >> phone_number;
    // std::cout << "Introduce your birthday date:" << std::endl;
    // std::cin >> birthday_date;
    // std::cout << "Introduce your favourite meal:" << std::endl;
    // std::cin >> fav_meal;
    // std::cout << "Introduce your underwear color:" << std::endl;
    // std::cin >> underwear_color;
    // std::cout << "Introduce your darkest secret:" << std::endl;
    // std::cin >> darkest_secret;
    return 0;
}

std::string     Contact::format_information(std::string information) {
    int         len;
    std::string formatted_information;

    len = int(information.length());
    formatted_information = "";
    if (len == 10)
        return information;
    if (len > 10) {
        for (int i = 0; i < 10; ++i)
            formatted_information[i] = information[i];
        formatted_information[10] = '.';
        return formatted_information;
    }
    for (int i = 0; i < 10 - len; ++i)
        formatted_information[i] = ' ';
    // for (int j = 0; j < 10; ++j) {
    //     formatted_information[len + j] += information[j];
    // }
    std::cout << formatted_information << std::endl;
    formatted_information[10 - len] += information;
    return formatted_information;
}

int              Contact::print_general_information() {
    std::string general_information;

    general_information = "| ";
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