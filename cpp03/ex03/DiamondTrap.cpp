/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 09:50:37 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/17 15:39:16 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

std::ostream&	operator<<(std::ostream& o, const DiamondTrap& claptrap)
{
	o << "[DiamondTrap]" + claptrap.DiamondTrap::getName();
	return (o);
}

DiamondTrap::DiamondTrap(const std::string& name) :  FragTrap(name), ScavTrap(name)
{
	_hp = _defaulthp;
	_ep = _defaultep;
	_dmg = _defaultdmg;
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	std::cout << *this << " is made of one of the hardest metals (If not THE hardest metal) known the man.\n"
			<< "Name: " << _name << " HP: " << _hp << " EP: " << _ep << " DMG: " << this->_dmg << std::endl;
}

DiamondTrap::DiamondTrap() { std::cout << "Diamond default constructor" << std::endl;  }
DiamondTrap& DiamondTrap::operator= (const DiamondTrap& ref)
{
	_name = ref.getName();
	return *this;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << *this << " wasn't forever." << std::endl;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
