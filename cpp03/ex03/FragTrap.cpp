/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:44:36 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/17 15:33:55 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::ostream&	operator<<(std::ostream& o, const FragTrap& claptrap)
{
	o << "[FragTrap]" + claptrap.getName();
	return (o);
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, _defaulthp, _defaultep, _defaultdmg)
{
	std::cout << *this << " is here to kick ass!" << std::endl;
}

FragTrap::FragTrap() : ClapTrap("Default FragTrap", _defaulthp, _defaultep, _defaultdmg)
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
