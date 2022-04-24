/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:44:36 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/24 08:57:47 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << _name << " wanna kick some ass!" << std::endl;
}

FragTrap::~FragTrap() { std::cout << _name << " is all out of gum." << std::endl; }

void FragTrap::highFiveGuys()
{
	if (_ep < 1)
		std::cout << _name << " is too tired to give hight-fives." << std::endl;
	_ep--;
	std::cout << _name << " is throwing high-fives!" << std::endl;
}
