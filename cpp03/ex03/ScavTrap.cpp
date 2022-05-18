/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:03:45 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/11 16:45:52 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::ostream&	operator<<(std::ostream& o, const ScavTrap& claptrap)
{
	o << "[ScavTrap]" + claptrap.getName();
	return (o);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
	//_name = name; _hp = 100; _ep = 50; _dmg = 20;
	std::cout << *this << " is ready to scavenge Pandora!" << std::endl;
///////////////////////////////////////////////
std::cout << "HP: " << _hp << " EP: " << _ep << " DMG: " << _dmg << std::endl;

}

ScavTrap::ScavTrap() : ClapTrap("Default ScavTrap", 100, 50, 20)
 {
 std::cout << "Default ScavTrap constructor."<< std::endl;
 }
ScavTrap& ScavTrap::operator= (const ScavTrap& ref)
{
	_name = ref.getName();
	return *this;
}
ScavTrap::~ScavTrap() { std::cout << *this << " is no more." << std::endl; }

void	ScavTrap::guardGate()
{
	if (_ep < 1)
	{
		std::cout << *this << " is too tired to guard the gate." << std::endl;
		return;
	}
	_ep--;
	std::cout << *this << " is on gatekeeping duty." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hp <= 0)
	{
		std::cout  << *this << " is dead, it can't super ScavTrap attack anymore." << std::endl;
		return;
	}
	if (_ep <= 0)
	{
		std::cout  << *this << " is tired, it can't super ScavTrap attack now." << std::endl;
		return;
	}
	_ep--;
	std::cout  << *this << " super ScavTrap attacks " << target << ", causing "
			<< _dmg << " points of damage!" << std::endl;
}
