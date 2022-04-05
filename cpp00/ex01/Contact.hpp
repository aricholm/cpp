/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 17:06:15 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/30 20:24:51 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string		_lastname;
	std::string		_firstname;
	std::string		_nickname;
	std::string		_number;
	std::string 	_secret;
	
public:
	Contact();
	~Contact();
	std::string		getFirstname() const;
	std::string		getLastname() const;
	std::string		getNickname() const;
	std::string		getNumber() const;
	std::string		getSecret() const;

	void			setFirstname(std::string firstname);
	void			setLastname(std::string lastname);
	void			setNickname(std::string nickname);
	void			setNumber(std::string number);
	void			setSecret(std::string secret);
};

#endif /* CONTACT_HPP */
