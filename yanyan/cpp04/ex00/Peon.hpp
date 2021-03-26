/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 00:20:33 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/16 00:35:19 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class	Peon : public Victim
{
	public:

	Peon(void);
	Peon(std::string name);
	Peon(const Peon &copy);
	Peon &operator=(const Peon &copy);
	virtual ~Peon(void);

	virtual void	getPolymorphed(void) const;
};

#endif
