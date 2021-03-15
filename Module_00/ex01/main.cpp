#include "./contact.hpp"

int         program(Contact *phonebooooook, int contacts);

int         add_contact(Contact *phonebooooook, int contacts) {
    if (contacts > 8)
        std::cout << "The phonebooooook is full, you cannot ADD." << std::endl;
    else
        phonebooooook[contacts].Create(contacts);
    contacts += 1;
    return program(phonebooooook, contacts);
}

int        search_contact(Contact *phonebooooook, int contacts) {
    for (int i = 0; i < contacts; ++i)
        phonebooooook[i].print_general_information();
    return program(phonebooooook, contacts);
}

int         program(Contact *phonebooooook, int contacts) {
    std::string     command;

    std::cout << "Enter a command [ADD, SEARCH, EXIT]:" << std::endl;
    std::cin >> command;
    if (command == "ADD" or command == "1")
        return add_contact(phonebooooook, contacts);
    else if (command == "SEARCH" or command == "2")
        return search_contact(phonebooooook, contacts);
    else if (command == "EXIT" or command == "3")
        return 0;
    return 1;
}

int         main(void) {
    int             output;
    Contact         *phonebooooook;

    phonebooooook = new Contact[8];
    output = program(phonebooooook, 0);
    if (output == 1)
        std::cout << "There has been a problem while processing!" << std::endl;
    return output;
}