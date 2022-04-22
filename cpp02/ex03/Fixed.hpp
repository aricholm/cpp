/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:06 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/20 18:59:27 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_point = 8;
	static const float	_power = 1 << _point;
public:
	Fixed();
	Fixed(const Fixed& copy);
	Fixed(const int integer);
	Fixed(const float flt);
	~Fixed();

	static bool verbose;

	Fixed&	operator= (const Fixed& equal);
	bool	operator> (const Fixed& fixed) const;
	bool	operator< (const Fixed& fixed) const;
	bool	operator!= (const Fixed& fixed) const;
	bool	operator== (const Fixed& fixed) const;
	bool	operator>= (const Fixed& fixed) const;
	bool	operator<= (const Fixed& fixed) const;

	Fixed	operator+ (const Fixed& fixed) const;
	Fixed	operator- (const Fixed& fixed) const;
	Fixed	operator* (const Fixed& fixed) const;
	Fixed	operator/ (const Fixed& fixed) const;

	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	static const Fixed&	max(const Fixed& left, const Fixed& right);
	static const Fixed&	min(const Fixed& left, const Fixed& right);
	static Fixed&	max(Fixed& left, Fixed& right);
	static Fixed&	min(Fixed& left, Fixed& right);
	
	int		getRawBits() const;
	void	setRawBits(const int raw);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream&	operator<< (std::ostream& o, const Fixed& fixed);
	
#endif /* FIXED_HPP */
