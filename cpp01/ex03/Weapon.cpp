/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:36:56 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 11:09:06 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}

const std::string&	Weapon::getType() const { return _type; }
void				Weapon::setType(std::string type) { _type = type; }
