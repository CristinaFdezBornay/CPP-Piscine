/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 18:17:00 by hexa              #+#    #+#             */
/*   Updated: 2020/05/08 20:46:01 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <cstdlib>

# include "ISquad.hpp"

class	Squad : public ISquad
{
	public:
		Squad(void);
		Squad(const Squad&);

		~Squad(void);

		Squad& operator=	(const Squad&);

		virtual int				getCount() const;
		virtual ISpaceMarine*	getUnit(int) const;
		virtual int				push(ISpaceMarine*);

	private:
		typedef struct	s_container {
			ISpaceMarine		*unit;
			struct s_container	*next;
		}				t_container;

		int			m_nbUnit;
		t_container	*m_squad;

		void	m_copy(const Squad&);
		void	m_destroy(void);
		bool	m_present(ISpaceMarine*, t_container*);
};

#endif
