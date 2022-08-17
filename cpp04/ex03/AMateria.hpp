/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:59:02 by aricholm          #+#    #+#             */
/*   Updated: 2022/05/18 14:50:27 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{

	public:

		virtual ~AMateria();
		AMateria(std::string const & type);
		
		std::string const &	getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		const std::string	_type;
	private:
		AMateria(); 
		AMateria( AMateria const & src );
		AMateria &		operator=( AMateria const & rhs );
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */