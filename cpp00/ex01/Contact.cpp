/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:14:44 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/30 20:24:40 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() { }

Contact::~Contact() { }

std::string Contact::getFirstname()	const {	return (this->_firstname); }
std::string Contact::getLastname()	const {	return (this->_lastname); }
std::string Contact::getNickname()	const {	return (this->_nickname); }
std::string	Contact::getNumber()	const {	return (this->_number); }
std::string Contact::getSecret()	const {	return (this->_secret); }

void Contact::setFirstname(std::string firstname)	{this->_firstname = firstname;}
void Contact::setLastname(std::string lastname)		{this->_lastname = lastname;}
void Contact::setNickname(std::string nickname)		{this->_nickname = nickname;}
void Contact::setNumber(std::string number)			{this->_number = number;}
void Contact::setSecret(std::string secret)			{this->_secret = secret;}