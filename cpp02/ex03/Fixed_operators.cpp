/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_operators.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:55:32 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/16 11:28:57 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator= (const Fixed &equal)
{
	if (verbose)
		std::cout << "Copy assignment operator called" << std::endl;
	this->_value = equal.getRawBits();
	return (*this);
}

//COMPARISON OPERATORS
bool	Fixed::operator> (const Fixed& fixed) const
{
	if (verbose)
		std::cout << "Greater than operator called" << std::endl;
	return (this->_value > fixed.getRawBits());
}

bool	Fixed::operator< (const Fixed& fixed) const
{
	if (verbose)
		std::cout << "Less than operator called" << std::endl;
	return (this->_value < fixed.getRawBits());
}

bool	Fixed::operator>= (const Fixed& fixed) const
{
	if (verbose)
		std::cout << "Greater than or equal operator called" << std::endl;
	return (this->_value >= fixed.getRawBits());
}

bool	Fixed::operator<= (const Fixed& fixed) const
{
	if (verbose)
		std::cout << "Less than or equal operator called" << std::endl;
	return (this->_value <= fixed.getRawBits());
}

bool	Fixed::operator== (const Fixed& fixed) const
{
	if (verbose)
		std::cout << "Equal operator called" << std::endl;
	return (this->_value == fixed.getRawBits());
}

bool	Fixed::operator!= (const Fixed& fixed) const
{
	if (verbose)
		std::cout << "Not equal operator called" << std::endl;
	return (this->_value != fixed.getRawBits());
}

//ARITHMETIC OPERATORS

Fixed	Fixed::operator+ (const Fixed& fixed) const
{
	Fixed	out;
	if (verbose)
		std::cout << "Plus operator called" << std::endl;
	out._value = this->_value + fixed.getRawBits();
	return (out);
}

Fixed	Fixed::operator- (const Fixed& fixed) const
{
	Fixed	out;
	if (verbose)
		std::cout << "Minus operator called" << std::endl;
	out._value = this->_value - fixed.getRawBits();
	return (out);
}

Fixed	Fixed::operator* (const Fixed& fixed) const
{
	if (verbose)
		std::cout << "Multiply operator called" << std::endl;
	Fixed out;
	out.setRawBits(this->_value * fixed.getRawBits() >> _point);
	return (out);
}

Fixed	Fixed::operator/ (const Fixed& fixed) const
{
	if (verbose)
		std::cout << "Divide operator called" << std::endl;
	Fixed out;
	out.setRawBits((this->_value << _point) / fixed.getRawBits());
	return (out);
}

//INCREMENT/DECREMENT OPERATORS

Fixed&	Fixed::operator++()
{
	if (verbose)
		std::cout << "Prefix increment operator called" << std::endl;
	this->_value++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	if (verbose)
		std::cout << "Prefix decrement operator called" << std::endl;
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	if (verbose)
		std::cout << "Postfix increment operator called" << std::endl;
	Fixed	old(*this);
	this->_value++;
	return (old);
}

Fixed	Fixed::operator--(int)
{
	if (verbose)
		std::cout << "Postfix decrement operator called" << std::endl;
	Fixed	old(*this);
	this->_value--;
	return (old);
}
