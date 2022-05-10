/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:46:06 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/29 15:29:17 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

std::ostream&	operator<<(std::ostream& o, const ClapTrap& claptrap)
{
	o << "[ClapTrap]" + claptrap.getName();
	return (o);
}

ClapTrap::ClapTrap() : _name("CL4P-TP"), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "Default constructor called, this shouldn't be possible." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name)//, _hp(10), _ep(10), _dmg(0)
{ _hp = 10; _ep = 10; _dmg = 0;
	std::cout << "Allow me to introduce myself -- I am CL4T-TP steward bot, "
			<<"but my friends call me "  << _name <<  "!"  << std::endl;
}

ClapTrap::ClapTrap(const std::string name, const int hp, const int ep, const int dmg) 
		: _name(name), _hp(hp), _ep(ep), _dmg(dmg) 
{
	std::cout << *this << " is a special purpose CL4P-TP steward bot." << std::endl;
}

ClapTrap::~ClapTrap( ){	std::cout << *this << " is deconstructed." << std::endl; }

ClapTrap& ClapTrap::operator= (const ClapTrap& claptrap)
{
	_name = claptrap.getName();
	return *this;
}
std::string ClapTrap::getName() const
{ return _name; }
void	ClapTrap::attack(const std::string& target)
{
	if (_hp <= 0)
	{
		std::cout  << *this << " is dead, it can't attack anymore." << std::endl;
		return;
	}
	if (_ep <= 0)
	{
		std::cout  << *this << " is tired, it can't attack now." << std::endl;
		return;
	}
	_ep--;
	std::cout  << *this << " attacks " << target << ", causing "
			<< _dmg << " points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout  << *this << " is already dead." << std::endl;
		return;
	}
	_hp -= amount;
	if (_hp > 0)
		std::cout  << *this << " survived a " << amount << " dmg attack with "
			<< _hp << " hit points." << std::endl;
	else
		std::cout  << *this << " died from a " << amount << " dmg attack." << std::endl;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout  << *this << " is dead, it can't repair itself." << std::endl;
		return; 
	}
	if (_ep <= 0)
	{
		std::cout  << *this << " is tired, it can't repair itself." << std::endl;
		return; 
	}
	_ep--;
	_hp += amount;
	std::cout  << *this << " healed itself " << amount << " HP to " 
			<< _hp << " HP." << std::endl;
}
