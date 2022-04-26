/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:44:36 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/26 15:15:04 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

std::ostream&	operator<<(std::ostream& o, const FragTrap& claptrap)
{
	o << "[FragTrap]" + claptrap.getName();
	return (o);
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << *this << " wanna kick some ass!" << std::endl;
}

FragTrap::~FragTrap() { std::cout << *this << " is all out of gum." << std::endl; }

void FragTrap::highFiveGuys()
{
	if (_ep < 1)
		std::cout << *this << " is too tired to give hight-fives." << std::endl;
	_ep--;
	std::cout << *this << " is throwing high-fives!" << std::endl;
}
