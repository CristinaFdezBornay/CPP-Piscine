/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:52:33 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/07 19:54:52 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	private:

	std::string		m_firstName;
	std::string		m_lastName;
	std::string		m_nickName;
	std::string		m_login;
	std::string		m_postalAddr;
	std::string		m_emailAddr;
	std::string		m_phone;
	std::string		m_birthday;
	std::string		m_favMeal;
	std::string		m_underwearColor;
	std::string		m_secret;

	public:
	Contact();
	void			addField(int field, std::string content);
	std::string		getField(int field);
};

#endif
