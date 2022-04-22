/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:06 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/06 21:50:19 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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

	Fixed&	operator= (const Fixed &equal);
	int		getRawBits() const;
	void	setRawBits(const int raw);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream&	operator<< (std::ostream& o, const Fixed& fixed);
	
#endif /* FIXED_HPP */
