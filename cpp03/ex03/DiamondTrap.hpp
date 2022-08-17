/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 09:45:07 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/17 16:04:50 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
					DiamondTrap();
					DiamondTrap(const DiamondTrap& diamondtrap);
	DiamondTrap&	operator=(const DiamondTrap& diamondtrap);
	std::string		_name;
	using			FragTrap::_defaulthp;
	using			ScavTrap::_defaultep;
	using			FragTrap::_defaultdmg;	

public:
	
					DiamondTrap(const std::string& name);
					~DiamondTrap();
	void			whoAmI() const;

	using			ScavTrap::attack;
};

std::ostream&	operator<< (std::ostream& o, const DiamondTrap& claptrap);

#endif /* DIAMONDTRAP_HPP */
