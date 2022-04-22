/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:00 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/06 20:21:40 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)	{ std::cout << "Default constructor called" << std::endl; } 
Fixed::~Fixed()				{ std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(Fixed const &copy) : _value(copy.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed & Fixed::operator= (const Fixed &equal)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = equal.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawbits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawbits member function called" << std::endl;
	_value = raw;
}
