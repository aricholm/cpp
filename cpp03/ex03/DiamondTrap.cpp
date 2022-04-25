/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 09:50:37 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/25 17:45:57 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
{
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << " wasn't forever." << std::endl;
}