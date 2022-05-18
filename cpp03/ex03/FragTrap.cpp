/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:44:36 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/11 10:13:30 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::ostream&	operator<<(std::ostream& o, const FragTrap& claptrap)
{
	o << "[FragTrap]" + claptrap.getName();
	return (o);
}

FragTrap::FragTrap(const std::string name)// : ClapTrap(name, 100, 100, 30)
{	_name = name; _hp = 100; _ep = 100; _dmg = 30; 
	std::cout << *this << " is here to kick ass!" << std::endl;
///////////////////////////////////////
std::cout << "HP: " << _hp << " EP: " << _ep << " DMG: " << _dmg << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Default FragTrap", 100, 100, 30)
{
	std::cout << "FragTrap default constructor" << std::endl;
}
FragTrap& FragTrap::operator= (const FragTrap& ref)
{
	_name = ref.getName();
	return *this;
}
FragTrap::~FragTrap() { std::cout << *this << " is all out of gum." << std::endl; }

void FragTrap::highFiveGuys()
{
	if (_ep < 1)
		std::cout << *this << " is too tired to give high-fives." << std::endl;
	_ep--;
	std::cout << *this << " is throwing high-fives!" << std::endl;
}
