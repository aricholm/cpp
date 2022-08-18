#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

							Ice();
							Ice( Ice const & src );
		virtual				~Ice();

		Ice &				operator=( Ice const & rhs );
		virtual AMateria	*clone() const;
		virtual void		use(ICharacter& target);
	private:

};

std::ostream &			operator<<( std::ostream & o, Ice const & i );

#endif /* ************************************************************* ICE_H */