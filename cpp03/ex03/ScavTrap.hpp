/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 07:58:19 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/29 10:16:43 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

				ScavTrap(const ScavTrap& scavtrap);
	ScavTrap&	operator= (const ScavTrap& scavtrap);	
protected:
				ScavTrap();
public:
				ScavTrap(const std::string name);
				~ScavTrap();
	void		guardGate();
	void		attack(const std::string& target);
};

std::ostream&	operator<< (std::ostream& o, const ScavTrap& claptrap);

#endif