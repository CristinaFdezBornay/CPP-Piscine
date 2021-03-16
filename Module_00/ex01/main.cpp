#include "./contact.hpp"

int         program(Contact *phonebooooook, int contacts);

int         add_contact(Contact *phonebooooook, int contacts) {
    if (contacts > 8)
        std::cout << "The phonebooooook is full, you cannot ADD." << std::endl;
    else {
        phonebooooook[contacts].Create(contacts);
        contacts += 1;
    }
    return program(phonebooooook, contacts);
}

int         search_contact(Contact *phonebooooook, int contacts) {
    int             index;
    std::string     index_str;


    if (contacts == 0)
        std::cout << "The phonebooooook is empty, you cannot SEARCH." << std::endl;
    else {
        std::cout << "    +----------+----------+----------+" << std::endl;
        std::cout << "    |   NAME   |  FAMILY  | NICKNAME |" << std::endl;
        std::cout << "+---+----------+----------+----------+" << std::endl;
        for (int i = 0; i < contacts; ++i) {
            phonebooooook[i].print_general_information();
            std::cout << "+---+----------+----------+----------+" << std::endl;
        }
        std::cout << "Introduce the index of the desired contact:" << std::endl;
        std::getline (std::cin,index_str);
        index = int(index_str[0] - '0');
        if (index >= 0 and index <= 8 && phonebooooook[index].does_exist(index))
            phonebooooook[index].print_complete_information();
        else {
            std::cout << "Introduce a valid index!" << std::endl;
            return search_contact(phonebooooook, contacts);
        }
    }
    return program(phonebooooook, contacts);
}

int         program(Contact *phonebooooook, int contacts) {
    std::string     command;

    std::cout << "\n\nEnter a command [ADD, SEARCH, EXIT]:" << std::endl;
    std::getline (std::cin,command);
    if (command == "ADD" or command == "1")
        return add_contact(phonebooooook, contacts);
    else if (command == "SEARCH" or command == "2")
        return search_contact(phonebooooook, contacts);
    else if (command == "EXIT" or command == "3")
        return 0;
    else {
        std::cout << "\nPlease introduce one of the available commands!\n" << std::endl;
        return program(phonebooooook, contacts);
    }
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