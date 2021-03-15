#include "./contact.hpp"

int         add_contact(Contact *phonebooooook, int contacts) {
    (void)phonebooooook;
    contacts += 1;
    std::cout << "lol" << std::endl;
    return contacts;
}

void        search_contact(Contact *phonebooooook, int contacts) {
    (void)phonebooooook;
    std::cout << contacts << std::endl;
}

int         program(Contact *phonebooooook) {
    int             contacts;
    std::string     command;

    contacts = 0;
    std::cout << "Enter a command [ADD, SEARCH, EXIT]:" << std::endl;
    std::cin >> command;
    if (command == "ADD") {
        contacts = add_contact(phonebooooook, contacts);
    }
    else if (command == "SEARCH") {
        search_contact(phonebooooook, contacts);
    }
    return 0; 
}

int         main(void) {
    Contact         *phonebooooook;

    phonebooooook = new Contact[8];
    program(phonebooooook);
    return 0;
}