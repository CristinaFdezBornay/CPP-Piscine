# include <iostream>

int     main( void ){
    std::string     string = "HI THIS IS BRAIN";
    std::string     *stringPtr = &string;
    std::string     &stringRef = string;

    std::cout << "\nDisplay using pointer: *stringPtr" << std::endl;
    std::cout << *stringPtr << std::endl;
    std::cout << "\nDisplay using reference: stringRef" << std::endl;
    std::cout << stringRef << std::endl;

    return 0;
}

// clang++ -Wall -Wextra -Werror ex04.cpp