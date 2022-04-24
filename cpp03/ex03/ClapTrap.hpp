/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 15:46:23 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/24 08:18:54 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:

					ClapTrap();
protected:
					ClapTrap(	const std::string name,
								const int hp,
								const int ep,
								const int dmg);
	std::string		_name;
	int				_hp;
	int				_ep;
	int				_dmg;
public:
					ClapTrap(const ClapTrap& claptrap);
					ClapTrap(const std::string name);
					~ClapTrap();
	ClapTrap& 		operator = (const ClapTrap& claptrap);

	std::string		getName() const;
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};




#endif // CLAPTRAP_HPP