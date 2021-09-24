/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:00:02 by crfernan          #+#    #+#             */
/*   Updated: 2021/09/24 15:30:23 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

uintptr_t   serialize( Data* ptr ) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *      deserialize( uintptr_t raw ) {
    return reinterpret_cast<Data *>(raw);
}

int         main( void ) {
    Data        *data = new Data;
    Data        *ptr = NULL;
    uintptr_t   serialized_data;

    std::cout << "Data address    : " << data << std::endl;
    data->d_str1 = "toto";
    data->d_int = 42;
    data->d_str2 = "tata";

    serialized_data = serialize(data);
    std::cout << "Serialized data : " << serialized_data << std::endl;

    ptr = deserialize(serialized_data);
    std::cout << "Recovered data  : " << ptr << std::endl << std::endl;
    std::cout << "ptr->d_str1  => "<< ptr->d_str1 << std::endl;
    std::cout << "ptr->d_int   => "<< ptr->d_int << std::endl;
    std::cout << "ptr->d_str2  => "<< ptr->d_str2 << std::endl;

    return 0;
}