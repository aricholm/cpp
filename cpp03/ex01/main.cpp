/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:30:38 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/26 15:00:07 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
//	ClapTrap sanyi("Sándor");
	ScavTrap jozsi("József");

	jozsi.attack("Attila");
	jozsi.takeDamage(12);
	jozsi.beRepaired(8);
	jozsi.guardGate();

	return 0;
}
