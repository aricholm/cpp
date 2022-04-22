/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:47:06 by aricholm          #+#    #+#             */
/*   Updated: 2022/04/06 20:21:55 by aricholm         ###   ########.fr       */
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
public:
	Fixed();
	Fixed(Fixed const &copy);
	~Fixed();
	Fixed & operator = (const Fixed &equal);
	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif /* FIXED_HPP */
