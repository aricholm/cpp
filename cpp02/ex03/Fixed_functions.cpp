/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_functions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:56:22 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/13 18:49:55 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		Fixed::getRawBits() const
{
	if (verbose)
		std::cout << "getRawbits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(const int raw)
{
	if (verbose)
		std::cout << "setRawbits member function called" << std::endl;
	_value = raw;
}

int		Fixed::toInt() const
{
	if (verbose)
		std::cout << "toInt member function called" << std::endl;
	return (_value >> _point);
}

float	Fixed::toFloat() const
{
	if (verbose)
		std::cout << "toFloat member function called" << std::endl;
	return (_value / _power);
}

const Fixed&	Fixed::max(const Fixed& left, const Fixed& right)
{
	if (verbose)
		std::cout << "Const max called" << std::endl;
	return (left.getRawBits() < right.getRawBits() ? right : left);		
}

const Fixed&	Fixed::min(const Fixed& left, const Fixed& right)
{
	if (verbose)
		std::cout << "Const min called" << std::endl;
	return (left.getRawBits() > right.getRawBits() ? right : left);		
}

Fixed&	Fixed::max(Fixed& left, Fixed& right)
{
	if (verbose)
		std::cout << "Max called" << std::endl;
	return (left.getRawBits() < right.getRawBits() ? right : left);
}

Fixed&	Fixed::min(Fixed& left, Fixed& right)
{
	if (verbose)
		std::cout << "Min called" << std::endl;
	return (left.getRawBits() < right.getRawBits() ? right : left);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}
