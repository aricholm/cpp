/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 19:01:07 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/23 19:13:45 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap sanyi("Sándor");

	sanyi.attack("Ádám");	//ep 9
	sanyi.attack("Béla");	//ep 8
	sanyi.takeDamage(4);
	sanyi.attack("Csaba");	//ep 7
	sanyi.takeDamage(5);
	sanyi.beRepaired(2);	//ep 6
	sanyi.attack("Dávid");	//ep 5
	sanyi.attack("Eszti");	//ep 4
	sanyi.beRepaired(1);	//ep 3
	sanyi.takeDamage(2);
	sanyi.beRepaired(2);	//ep 2
	sanyi.attack("Ferenc");	//ep 1
	sanyi.attack("Gusztáv");//0
	sanyi.beRepaired(4);
	sanyi.takeDamage(4);
	sanyi.attack("Helga");
	sanyi.beRepaired(2);
	return 0;
}
