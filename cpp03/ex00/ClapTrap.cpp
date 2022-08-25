/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:46:06 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/25 08:58:34 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("CL4P-TP"), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "Default constructor called, this shouldn't be possible." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "Allow me to introduce myself -- I am CL4T-TP steward bot, "
			<<"but my friends call me "  << _name <<  "!"  << std::endl;
}

ClapTrap::~ClapTrap(  {	std::cout << _name << " is deconstructed." << std::endl; }

ClapTrap& ClapTrap::operator= (const ClapTrap& claptrap)
{
	_name = claptrap.getName();
	return *this;
}

std::string ClapTrap::getName() const { return _name; }

void	ClapTrap::attack(const std::string& target)
{
	if (_hp <= 0)
	{
		std::cout  << _name << " is dead, it can't attack anymore." << std::endl;
		return;
	}
	if (_ep <= 0)
	{
		std::cout  << _name << " is tired, it can't attack now." << std::endl;
		return;
	}
	_ep--;
	std::cout  << _name << " attacks " << target << ", causing "
			<< _dmg << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout  << _name << " is already dead." << std::endl;
		return;
	}
	_hp -= amount;
	if (_hp > 0)
		std::cout  << _name << " survived a " << amount << " dmg attack with "
			<< _hp << " hit points." << std::endl;
	else
		std::cout  << _name << " died from a " << amount << " dmg attack." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout  << _name << " is dead, it can't repair itself." << std::endl;
		return; 
	}
	if (_ep <= 0)
	{
		std::cout  << _name << " is tired, it can't repair itself." << std::endl;
		return; 
	}
	_ep--;
	_hp += amount;
	std::cout  << _name << " healed itself " << amount << " HP to " 
			<< _hp << " HP." << std::endl;
}
