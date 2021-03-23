#include "./contact.hpp"

int         program(Contact *phonebooooook);

int         add_contact(Contact *phonebooooook) {
    if (phonebooooook->getNumber_contacts() >= 8)
        std::cout << "The phonebooooook is full, you cannot ADD." << std::endl;
    else {
        phonebooooook[phonebooooook->getNumber_contacts()].Add();
        phonebooooook->setNumber_contacts(phonebooooook->getNumber_contacts() + 1);
    }
    return program(phonebooooook);
}

int        print_general_info_and_get_index(Contact *phonebooooook) {
    std::string     index_str;
    int             index;

    std::cout << "    +----------+----------+----------+" << std::endl;
    std::cout << "    |   NAME   |  FAMILY  | NICKNAME |" << std::endl;
    std::cout << "+---+----------+----------+----------+" << std::endl;
    for (int i = 0; i < phonebooooook->getNumber_contacts(); ++i) {
        phonebooooook[i].print_general_information();
        std::cout << "+---+----------+----------+----------+" << std::endl;
    }
    std::cout << "Introduce the index of the desired contact:" << std::endl;
    std::getline (std::cin,index_str);
    index = int(index_str[0] - '0');
    if (index >= 0 and index <= phonebooooook->getNumber_contacts() - 1 and index_str[1] == 0) {
        return index;
    }
    return -1;
}

int         search_contact(Contact *phonebooooook) {
    int             index;

    if (phonebooooook->getNumber_contacts() == 0) {
        std::cout << "The phonebooooook is empty, you cannot SEARCH." << std::endl;
        return program(phonebooooook);
    }
    index = print_general_info_and_get_index(phonebooooook);
    if (index == -1) {
        std::cout << "Introduce a valid index!" << std::endl;
        return search_contact(phonebooooook);
    }
    phonebooooook[index].print_complete_information();
    return program(phonebooooook);
}

int         program(Contact *phonebooooook) {
    std::string     command;

    std::cout << "\n\nEnter a command [ADD, SEARCH, EXIT]:" << std::endl;
    std::getline (std::cin,command);
    if (command == "ADD" or command == "1")
        return add_contact(phonebooooook);
    else if (command == "SEARCH" or command == "2")
        return search_contact(phonebooooook);
    else if (command == "EXIT" or command == "3")
        return 0;
    else {
        std::cout << "\nPlease introduce one of the available commands!\n" << std::endl;
        return program(phonebooooook);
    }
    return 1;
}

int         main(void) {
    int             output;
    Contact         phonebooooook[8];

    output = program(phonebooooook);
    if (output == 1)
        std::cout << "There has been a problem while processing!" << std::endl;
    return output;
}