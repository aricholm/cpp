/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:30:35 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 13:49:50 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"

class Cat : public AAnimal
{

	public:

		Cat();
		Cat( Cat const & src );
		~Cat();
		using AAnimal::operator=;

		virtual void	makeSound( void ) const ;
	private:

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* CAT_HPP */
