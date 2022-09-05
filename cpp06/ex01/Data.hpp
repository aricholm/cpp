/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:18:23 by aricholm          #+#    #+#             */
/*   Updated: 2022/09/04 13:20:11 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{

	public:

		Data(const std::string);
		Data( Data const & src );
		~Data();

		std::string	getSecret() const;

		Data &		operator=( Data const & rhs );

	private:
		std::string	_secret;

};

//std::ostream &			operator<<( std::ostream & o, Data const & i );

#endif /* DATA_HPP */
