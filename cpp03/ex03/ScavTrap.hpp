/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 07:58:19 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/24 09:46:51 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
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

#endif