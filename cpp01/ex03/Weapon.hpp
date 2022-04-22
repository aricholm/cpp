/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:36:18 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 11:05:02 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string&	getType() const;
	void 				setType(std::string type);
};
#endif /* WEAPON_HPP */
