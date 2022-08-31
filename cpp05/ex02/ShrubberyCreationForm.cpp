/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:34:01 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/31 16:16:17 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("Shrubbery Creation", 145, 137)
{ _target = target; }

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) :
	AForm(src)
{ _target = src.getTarget(); }


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/
void	ShrubberyCreationForm::_doit() const
{
	std::ofstream myfile;
	std::string file = _target + "_shrubbery";
	myfile.open (file.c_str());
	myfile << "  @@@   \n";
	myfile << " @@@@@   &&\n";
	myfile << "  @@@   &&&&\n";
	myfile << "   ||   &&&&\n";
	myfile << "   ||    ||";
	myfile.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
