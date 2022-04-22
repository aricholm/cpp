/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:48:54 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 11:11:09 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif /* HUMANB_HPP */
