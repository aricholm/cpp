/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 09:50:37 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/10 16:15:36 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

std::ostream&	operator<<(std::ostream& o, const DiamondTrap& claptrap)
{
	o << "[DiamondTrap]" + claptrap.DiamondTrap::getName();
	return (o);
}

DiamondTrap::DiamondTrap(const std::string& name) : ScavTrap(name), FragTrap(name)
{
		std::cout	<< "This Name: " << this->_name << " HP: " << this->_hp << " EP: " << this->_ep << " DMG: " << this->_dmg << std::endl;
		std::cout	<< "Scav Name: " << ScavTrap::_name << " HP: " << ScavTrap::_hp << " EP: " << ScavTrap::_ep << " DMG: " << this->_dmg << std::endl;
		std::cout	<< "Frag Name: " << FragTrap::_name << " HP: " << FragTrap::_hp << " EP: " << FragTrap::_ep << " DMG: " << this->_dmg << std::endl;

	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hp = this->FragTrap::_hp;
	_ep = this->ScavTrap::_ep;
	_dmg = this->FragTrap::_dmg;
	std::cout << *this << " is made of one of the hardest metals (If not THE hardest metal) known the man.\n"
			<< "Name: " << _name << " HP: " << _hp << " EP: " << _ep << " DMG: " << this->_dmg << std::endl;
}

//DiamondTrap::DiamondTrap() {}
DiamondTrap::~DiamondTrap()
{
	std::cout << *this << " wasn't forever." << std::endl;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
