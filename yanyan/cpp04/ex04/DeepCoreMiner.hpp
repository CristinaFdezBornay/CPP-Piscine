/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 01:51:29 by hexa              #+#    #+#             */
/*   Updated: 2020/04/28 02:59:13 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

# include "IMiningLaser.hpp"

class	IAsteroid;

class	DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		DeepCoreMiner(const DeepCoreMiner&);

		DeepCoreMiner&	operator= (const DeepCoreMiner&);

		~DeepCoreMiner(void);

		virtual void	mine(IAsteroid*);
};

#endif
