/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:46:23 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/17 16:03:56 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
					ClapTrap(const ClapTrap& claptrap);
	ClapTrap& 		operator = (const ClapTrap& claptrap);
protected:
	static const int		_defaulthp = 10;
	static const int		_defaultep = 10;
	static const int		_defaultdmg = 0;
	
					ClapTrap(	const std::string name,
								const int hp,
								const int ep,
								const int dmg);
					ClapTrap();
	std::string		_name;
	int				_hp;
	int				_ep;
	int				_dmg;
	
public:
					ClapTrap(const std::string name);
					~ClapTrap();

	std::string		getName() const;
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

std::ostream&	operator<< (std::ostream& o, const ClapTrap& claptrap);

#endif // CLAPTRAP_HPP
