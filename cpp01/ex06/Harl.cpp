/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:51:12 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/01 14:32:03 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	pointers[0] = &Harl::debug;
	pointers[1] = &Harl::info;
	pointers[2] = &Harl::warning;
	pointers[3] = &Harl::error;
}
Harl::~Harl() {}

void Harl::complain( std::string level )
{
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*pointers[i])();
	}
}

void Harl::complain_alot(std::string level)
{
	int lvl = -1;

	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
			lvl = i;
	}
	
	switch (lvl)	// -Wextra + -Werror don't let "fall through" switch
	{
	case 0:
		Harl::debug();
		Harl::info();
		Harl::warning();
		Harl::error();
		break;
	case 1:
		Harl::info();
		Harl::warning();
		Harl::error();
		break;
	case 2:
		Harl::warning();
		Harl::error();
		break;
	case 3:
		Harl::error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
	}
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
			<< "I really do!" << std::endl; 
	std::cout << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! "
		<< "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working "
		<< "here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}