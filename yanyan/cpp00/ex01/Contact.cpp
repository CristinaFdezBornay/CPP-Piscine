/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 16:29:14 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/07 19:13:49 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	m_firstName = "";
	m_lastName = "";
	m_nickName = "";
	m_login = "";
	m_postalAddr = "";
	m_emailAddr = "";
	m_phone = "";
	m_birthday = "";
	m_favMeal = "";
	m_underwearColor = "";
	m_secret = "";
}

void			Contact::addField(int field, std::string content)
{
	switch (field)
	{
		case 0:
			m_firstName = content;
			break;
		case 1:
			m_lastName = content;
			break;
		case 2:
			m_nickName = content;
			break;
		case 3:
			m_login = content;
			break;
		case 4:
			m_postalAddr = content;
			break;
		case 5:
			m_emailAddr = content;
			break;
		case 6:
			m_phone = content;
			break;
		case 7:
			m_birthday = content;
			break;
		case 8:
			m_favMeal = content;
			break;
		case 9:
			m_underwearColor = content;
			break;
		case 10:
			m_secret = content;
			break;
	}
}

std::string		Contact::getField(int field)
{
	switch (field)
	{
		case 0:
			return (m_firstName);
			break;
		case 1:
			return (m_lastName);
			break;
		case 2:
			return (m_nickName);
			break;
		case 3:
			return (m_login);
			break;
		case 4:
			return (m_postalAddr);
			break;
		case 5:
			return (m_emailAddr);
			break;
		case 6:
			return (m_phone);
			break;
		case 7:
			return (m_birthday);
			break;
		case 8:
			return (m_favMeal);
			break;
		case 9:
			return (m_underwearColor);
			break;
		case 10:
			return (m_secret);
			break;
	}
	return (NULL);
}
