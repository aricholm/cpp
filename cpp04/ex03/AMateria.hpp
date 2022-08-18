/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:59:02 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/18 17:23:42 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:
							AMateria(); 
							AMateria(std::string const & type);
							AMateria( AMateria const & src );
		virtual				~AMateria();
		
		AMateria &			operator=( AMateria const & rhs );
		
		std::string const &	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string			_type;
	private:
};

std::ostream &				operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */