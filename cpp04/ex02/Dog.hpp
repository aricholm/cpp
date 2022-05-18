/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:46:13 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:53:09 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"

class Dog : public AAnimal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();
		using	AAnimal::operator=;

		virtual void	makeSound( void ) const ;
	private:

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* DOG_HPP */
