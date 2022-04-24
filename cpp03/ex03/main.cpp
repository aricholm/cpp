/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 08:30:38 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/24 08:55:14 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap beni("Benedek");

	beni.attack("Aladár");
	beni.takeDamage(42);
	beni.beRepaired(21);
	beni.highFiveGuys();


	return 0;
}
