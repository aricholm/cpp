/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:03:45 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/26 15:15:19 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

std::ostream&	operator<<(std::ostream& o, const ScavTrap& claptrap)
{
	o << "[ScavTrap]" +claptrap.getName();
	return (o);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << *this << " is ready to scavenge Pandora!" << std::endl;
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
