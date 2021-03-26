/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:00:35 by ybayart           #+#    #+#             */
/*   Updated: 2020/05/08 20:48:17 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	private:

	public:
		PowerFist(std::string const & name = "Power Fist", int apcost = 8, int damage = 80);
		PowerFist(const PowerFist& old);
		PowerFist& operator=	(const PowerFist& copy);
		~PowerFist(void);

		virtual void	attack(void) const;
};

#endif
