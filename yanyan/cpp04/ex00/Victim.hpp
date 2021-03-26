/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 00:02:29 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/16 00:31:01 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class	Victim
{
	protected:

	std::string		m_name;

	public:

	Victim(void);
	Victim(std::string name);
	Victim(const Victim &victim);
	Victim &operator=(const Victim &victim);
	virtual ~Victim(void);

	std::string		getName(void) const;
	virtual void	getPolymorphed(void) const;
};

std::ostream &operator << (std::ostream &o, Victim const& elem);

#endif
