/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 02:40:29 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:49:17 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{
	public:
		MiningBarge(void);
		MiningBarge(const MiningBarge&);
		~MiningBarge(void);

		MiningBarge& operator=	(const MiningBarge&);

		void equip(IMiningLaser*);
		void mine(IAsteroid*) const;

	private:
		IMiningLaser*	m_laser[4];
};

#endif
