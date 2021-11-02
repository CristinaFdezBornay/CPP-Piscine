/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crfernan <crfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:10:19 by crfernan          #+#    #+#             */
/*   Updated: 2021/11/02 09:57:08 by crfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK
# define MUTANT_STACK

# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack( void );
        MutantStack( const MutantStack & rhs );
        virtual ~MutantStack( void );

        MutantStack const &     operator=( const MutantStack & rhs );
        T &                     operator[]( const unsigned int index );

        typedef std::iterator<std::bidirectional_iterator_tag, T> stack_iterator;

        class iterator : public stack_iterator {
            public:
                iterator( void );
                iterator( const iterator & rhs );
                iterator( MutantStack &ms, size_t index );
                virtual ~iterator( void );

                iterator        operator=( const iterator & it );
                T &             operator*( void ) const;
                iterator        operator++( void );
                iterator        operator--( void );
                bool            operator!=( iterator const &it );
                bool            operator==( iterator const &it );

            private:
                MutantStack   *_ms;
                size_t        _index;
        };

        iterator    begin( void );
        iterator    end( void );
};

template <typename T>
MutantStack<T>::MutantStack( void ) : std::stack<T>( ) {
    return ;
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T> & rhs ) : std::stack<T>( rhs ) {
    return ;
}

template <typename T>
MutantStack<T>::~MutantStack( void ) {
    return ;
}

template <typename T>
MutantStack<T> const &     MutantStack<T>::operator=( const MutantStack & rhs ) {
    return rhs;
}

template< typename T>
T &                         MutantStack<T>::operator[]( const unsigned int index ) {
    if ( index < 0 || index >= this->c.size() )
        throw( std::out_of_range("Out of range") );
    return this->c[index];
};

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::begin( void ) {
    iterator    it_begin = iterator( *this, 0 );
    return it_begin;
}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::end( void ) {
    iterator    it_end = iterator( *this, this->size() );
    return it_end;
}

template <typename T>
MutantStack<T>::iterator::iterator( void ) : _ms(NULL), _index(0) {
    return ;
}

template <typename T>
MutantStack<T>::iterator::iterator( const iterator & it ) : _ms(it._ms), _index(it._index) {
    return ;
}

template <typename T>
MutantStack<T>::iterator::iterator( MutantStack &ms, size_t index ) : _ms(&ms), _index(index) {
    return ;
}

template <typename T>
MutantStack<T>::iterator::~iterator( void ) {
    return ;
}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::iterator::operator=( const iterator & it ) {
    this->_ms = it._ms;
    this->_index = it._index;
    return *this;
}

template <typename T>
T &                                 MutantStack<T>::iterator::operator*( void ) const {
    return this->_ms->c[this->_index];
}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::iterator::operator++( void ) {
    iterator it = iterator(*this);
    ++this->_index;
    return it;
}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::iterator::operator--( void ) {
    iterator it = iterator(*this);
    --this->_index;
    return it;
}

template <typename T>
bool        MutantStack<T>::iterator::operator==( iterator const &it ) {
    if (this->_ms == it._ms && this->_index == it._index)
        return true;
    return false;
}

template <typename T>
bool        MutantStack<T>::iterator::operator!=( iterator const &it ) {
    if (this->_ms != it._ms || this->_index != it._index)
        return true;
    return false;
}

#endif