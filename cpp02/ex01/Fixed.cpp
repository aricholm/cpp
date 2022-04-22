/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:00 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/06 21:49:45 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// CONSTRUCTORS
Fixed::Fixed() : _value(0)	{ std::cout << "Default constructor called" << std::endl; } 
Fixed::~Fixed()				{ std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = integer << _point;
}

Fixed::Fixed(const float flt)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(flt * _power);
}

Fixed::Fixed(const Fixed& copy) : _value(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

//OPERATORS
Fixed& Fixed::operator= (const Fixed &equal)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = equal.getRawBits();
	return (*this);
}

//FUNCTIONS
int		Fixed::getRawBits() const
{
	std::cout << "getRawbits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "setRawbits member function called" << std::endl;
	_value = raw;
}

int		Fixed::toInt() const
{
	std::cout << "toInt member function called" << std::endl;
	return (_value >> _point);
}

float	Fixed::toFloat() const
{
	std::cout << "toFloat member function called" << std::endl;
	return (_value / _power);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}