/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 01:51:29 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 03:00:44 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

# include "IMiningLaser.hpp"

class	IAsteroid;

class	StripMiner : public IMiningLaser
{
	public:
		StripMiner(void);
		StripMiner(const StripMiner&);

		StripMiner&	operator= (const StripMiner&);

		~StripMiner(void);

		virtual void	mine(IAsteroid*);
};

#endif
