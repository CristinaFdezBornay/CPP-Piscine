/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 12:59:49 by crfernan          #+#    #+#             */
/*   Updated: 2021/04/13 16:58:05 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int                 error( std::string error_message, int return_value ) {
    std::cout << error_message << std::endl;
    return return_value;
}

int                 check_errors_input( int argc, char **argv ) {
    if ( argc != 4 )
        return error( "[ Error ] Please, introduce 3 arguments", 1 );
    if ( argv[1][0] == 0 or argv[2][0] == 0 or argv[3][0] == 0 )
        return error("[ Error ] Input cannot be empty.", 1);
    return 0;
}

std::string         get_filename_replace( std::string filename ) {
    size_t          filename_lengh = filename.length();

    for ( size_t i = 0; i < filename_lengh; ++i )
        filename[i] = std::toupper(filename[i]);
    filename +=  ".replace";
    return filename;
}

std::string         replace_s1_by_s2( std::string content, std::string s1, std::string s2 ) {
    size_t          s1_size;
    size_t          occurence_s1;

    s1_size = s1.size();
    while ((occurence_s1 = content.find( s1 )) != std::string::npos)
        content.replace( occurence_s1, s1_size, s2 );
    return content;
}

int                 replace( std::string filename, std::string s1, std::string s2 ) {
    std::string     line;
    std::string     content;
    std::ifstream   ifs(filename);

    if ( !ifs.is_open() )
        return error("[ Error ] File not found", 1);
    while ( std::getline( ifs, line ) ) {
        line = replace_s1_by_s2( line, s1, s2 );
        content += line;
        content += '\n';
    }
    ifs.close();

    std::ofstream   ofs( get_filename_replace( filename ) );
    ofs << content;
    ofs.close();
    return 0;
}

int                 main( int argc, char **argv ) {
    if ( check_errors_input( argc, argv ) != 0 )
        return 1;
    return replace(std::string(argv[1]), std::string(argv[2]), std::string(argv[3]));
}