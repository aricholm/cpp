/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:33:57 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/31 16:16:09 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("Robotomy Request", 72, 45)
{ _target = target; }

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) :
	AForm(src)
{ _target = src.getTarget(); }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/
void	RobotomyRequestForm::_doit() const
{
	srand(time(NULL));
	if (rand() % 2)
		std::cout << _target << " has been robotomized." << std::endl;
	else
		std::cout << _target << "'s robotomy is failed." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
