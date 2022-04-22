/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:28:53 by aricholm          #+#    #+#             */
/*   Updated: 2022/03/31 09:32:58 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}
Zombie::Zombie(std::string name) : _name(name) {}
Zombie::~Zombie()
{
	std::cout << _name << " is dead. Rest in peace (for now)" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::name(std::string name) { _name = name; }