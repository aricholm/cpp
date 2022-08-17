/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:41:05 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/17 15:33:24 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
			FragTrap(const FragTrap& fragtrap);
FragTrap& 	operator = (const FragTrap& ref);
protected:
	static const int		_defaulthp = 100;
	static const int		_defaultep = 100;
	static const int		_defaultdmg = 30;
	
			FragTrap();
public:
			FragTrap(const std::string name);
			~FragTrap();

void		highFiveGuys();
};

std::ostream&	operator<< (std::ostream& o, const FragTrap& claptrap);
#endif
