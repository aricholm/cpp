/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:21:52 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 10:11:13 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

class PhoneBook
{
private:
	int			_count;
	Contact		_book[8];
	std::string	_format(const std::string str) const;
public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void search() const;
};

#endif /* PHONEBOOK_HPP */
