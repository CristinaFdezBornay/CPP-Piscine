/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:24:39 by crfernan          #+#    #+#             */
/*   Updated: 2021/10/08 00:40:45 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY
# define ARRAY

template< typename T>
class Array{
    public:
        Array( void );
        Array( unsigned int const n );
        Array( const Array & rhs );
        virtual ~Array( void );
        Array &         operator=( Array const & rhs );
        T &             operator[]( unsigned int const index );
        void            print( unsigned int n ) const;
        unsigned int    size( void ) const;

    private:
        T*              _array;
        unsigned int    _size;
};

template< typename T>
Array<T>::Array( void ) {
    this->_size = 0;
    std::cout << "Default constructor" << std::endl;
};

template< typename T>
Array<T>::Array( unsigned int const n ) {
    this->_size = n;
    this->_array = new T[n];
    for ( unsigned int i = 0; i < n; i++ )
        this->_array[i] = ( rand() % 42);
    std::cout << "Unsigned int constructor" << std::endl;
};

template< typename T>
Array<T>::Array ( Array const & rhs ) {
    this->_size = rhs.size();
    this->_array = new T[this->_size];
    for ( unsigned int i = 0; i < this->_size ; i++)
        this->_array[i] = rhs._array[i];
    std::cout << "Copy constructor" << std::endl;
};

template< typename T>
Array<T>::~Array( void ) {
    if (this->_size > 0)
        delete[] this->_array;
    std::cout << "Default destructor" << std::endl;
};

template< typename T>
Array<T> &
Array<T>::operator=( Array const & rhs ) {
    this->_size = rhs._size;
    this->_array = rhs._array;
    this = rhs;
    std::cout << "Operator =" << std::endl;
    return this;
};

template< typename T>
T &     Array<T>::operator[]( unsigned int const index ) {
    if ( index >= this->_size )
        throw( std::out_of_range("Out of range") );
    return this->_array[index];
};

template< typename T>
void    Array<T>::print( unsigned int n ) const {
    std::cout << "| ";
    for ( unsigned int i = 0; i < n; i++) {
        try {
            if (i < this->_size)
                std::cout << this->_array[i] << " | ";
            else
                throw( std::out_of_range("Out of range") );
        } catch ( std::out_of_range & e ){
            std::cout << e.what() << " | ";
        }
    }
    std::cout << std::endl;
};

template< typename T>
unsigned int
Array<T>::size( void ) const {
    return this->_size;
};


#endif