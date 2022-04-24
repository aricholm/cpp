/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 07:58:19 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/24 08:05:20 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
				ScavTrap();
				ScavTrap(const ScavTrap& scavtrap);
	ScavTrap&	operator= (const ScavTrap& scavtrap);	
public:
				ScavTrap(const std::string name);
				~ScavTrap();
	void		guardGate();
};
