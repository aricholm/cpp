/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:41:05 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/28 13:05:23 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
		FragTrap(const FragTrap& fragtrap);
protected:
		FragTrap();
public:
		FragTrap(const std::string name);
		~FragTrap();

void	highFiveGuys();
};

std::ostream&	operator<< (std::ostream& o, const FragTrap& claptrap);
#endif