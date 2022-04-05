/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:26:17 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 10:20:18 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_count = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;
	std::string		number;
	std::string		secret;

	std::cout << "Contacts can't have empty fields!" << std::endl;
	while (firstname.empty())
	{
		std::cout << "Enter first name:" << std::endl;
		std::getline(std::cin, firstname);
	}
	while (lastname.empty())
	{
		std::cout << "Enter last name:" << std::endl;
		std::getline(std::cin, lastname);
	}
	while (nickname.empty())
	{
		std::cout << "Enter nick name:" << std::endl;
		std::getline(std::cin, nickname);
	}
	while (number.empty())
	{
		std::cout << "Enter telephone number:" << std::endl;
		std::getline(std::cin, number);
	}
	while (secret.empty())
	{
		std::cout << "Enter your darkest secret:" << std::endl;
		std::getline(std::cin, secret);
	}
	_book[_count % 8].setFirstname(firstname);
	_book[_count % 8].setLastname(lastname);
	_book[_count % 8].setNickname(nickname);
	_book[_count % 8].setNumber(number);
	_book[_count % 8].setSecret(secret);
	_count++;
}

std::string	PhoneBook::_format(const std::string str) const
{
	std::string	out;

	if (str.length() > 10)
		out = str.substr(0, 9) + ".";
	else
		out = str;
	return (out);
}

void PhoneBook::search() const
{
	int	input = -1;

	if (this->_count == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "ID" << "|"
			<< std::setw(10) << "Firstname" << "|"
			<< std::setw(10) << "Lastname" << "|"
			<< std::setw(10) << "Nickname" << std::endl;
	int nb = _count;
	if (nb > 8)
		nb = 8;
	for (int i = 0; i < nb; ++i)
	{
		std::cout << std::setw(10) << i + 1 << "|"
		<< std::setw(10) << this->_format(_book[i].getFirstname()) << "|"
		<< std::setw(10) << this->_format(_book[i].getLastname()) << "|"
		<< std::setw(10) << this->_format(_book[i].getNickname()) << std::endl;
	}
	std::cout << "Choose ID" << std::endl;
	std::cin >> input;
	std::cin.clear();
	std::cin.ignore(256, '\n');
	while (input < 1 || input > 8 || input > this->_count)
	{

		std::cout << "Invalid ID! Try again" << std::endl;
		std::cin >> input;
		std::cin.clear();
		std::cin.ignore(256, '\n');
	}
	std::cout << "Firstname:      " << _book[input - 1].getFirstname() << "\n"
			<< "Lastname:       " << _book[input - 1].getLastname() << "\n"
			<< "Nickname:       " << _book[input - 1].getNickname() << "\n"
			<< "Phone number:   " << _book[input - 1].getNumber() << "\n"
			<< "Darkest secret: " << _book[input - 1].getSecret() << std::endl;
}
