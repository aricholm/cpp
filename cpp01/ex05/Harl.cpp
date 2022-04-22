/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:51:12 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/01 11:19:01 by aricholm         ###   ########.fr       */
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

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my "
			<< "7XL-double-cheese-triple-pickle-specialketchup burger. "
			<< "I really do!" << std::endl; 
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! "
		<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started working "
		<< "here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}