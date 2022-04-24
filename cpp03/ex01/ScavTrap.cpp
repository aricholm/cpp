/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:03:45 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/24 08:33:34 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << _name << " is ready to scavenge Pandora!" << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << _name << " is no more." << std::endl; }

void	ScavTrap::guardGate()
{
	if (_ep < 1)
	{
		std::cout << _name << " is too tired to guard the gate." << std::endl;
		return;
	}
	_ep--;
	std::cout << _name << " is on gatekeeping duty." << std::endl;
}
