/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:00 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/20 20:13:00 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::verbose = false;

// CONSTRUCTORS

Fixed::Fixed() : _value(0)
{
	if (verbose)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() 
{
	if (verbose) 
		std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int integer)
{
	if (verbose)
		std::cout << "Int constructor called" << std::endl;
	this->_value = integer << _point;
}

Fixed::Fixed(const float flt)
{
	if (verbose)
		std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(flt * _power);
}

Fixed::Fixed(const Fixed& copy) : _value(copy.getRawBits())
{
	if (verbose)
		std::cout << "Copy constructor called" << std::endl;
}
