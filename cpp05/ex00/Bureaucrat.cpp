/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:20:34 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/31 16:08:14 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(const std::string name, int grade) :	_name(name),
															_grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) :	_name(src.getName()),
													_grade(src.getGrade()) {}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::promotion(int grade)
{
	if (_grade <= grade)
		throw GradeTooHighException();
	else
		_grade -=grade;
}

void	Bureaucrat::demotion(int grade)
{
	if (_grade + grade >= 150)
		throw GradeTooLowException();
	else
		_grade +=grade;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string&	Bureaucrat::getName()	const	{ return _name; }
int					Bureaucrat::getGrade()	const	{ return _grade; }

/* ************************************************************************** */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}
