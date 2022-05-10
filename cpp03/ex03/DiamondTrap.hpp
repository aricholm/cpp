/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 09:45:07 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/10 16:13:10 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
					DiamondTrap();
	DiamondTrap&	operator=(const DiamondTrap& diamondtrap);
	std::string		_name;

public:
					DiamondTrap(const std::string& name);
					~DiamondTrap();
	void			whoAmI() const;
	using			FragTrap::_hp;			
	using			ScavTrap::_ep;			
	using			FragTrap::_dmg;	
	
	using			ScavTrap::attack;
};

std::ostream&	operator<< (std::ostream& o, const DiamondTrap& claptrap);

#endif