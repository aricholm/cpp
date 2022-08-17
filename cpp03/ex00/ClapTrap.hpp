/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:46:23 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/17 16:02:36 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	int				_hp;
	int				_ep;
	int				_dmg;
					ClapTrap();
					ClapTrap(const ClapTrap& claptrap);
	ClapTrap& 		operator = (const ClapTrap& claptrap);
public:
					ClapTrap(const std::string name);
					~ClapTrap();

	std::string		getName() const;
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};




#endif // CLAPTRAP_HPP