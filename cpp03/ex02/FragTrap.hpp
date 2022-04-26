/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:41:05 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/26 15:04:05 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
		FragTrap();
		FragTrap(const FragTrap& fragtrap);
FragTrap&	operator= (const FragTrap& scavtrap);	
public:
		FragTrap(const std::string name);
		~FragTrap();

void	highFiveGuys();
};

#endif