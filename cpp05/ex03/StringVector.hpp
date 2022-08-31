/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringVector.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:41:22 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/30 17:37:19 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGVECTOR_HPP
# define STRINGVECTOR_HPP

# include <iostream>
# include <string>

class StringVector
{

	public:
						StringVector(int i);
						~StringVector();
		std::string&	operator[](int i);
		bool			has(const std::string) const;
		int				size() const;
		void			add(const std::string);
		class WrongIndex : public std::exception {
			virtual const char* what() const throw();};
	private:
		StringVector( StringVector const & src );
		StringVector &	operator=( StringVector const & rhs );
		std::string*	elem;
		int				sz;
		int				count;
};

//std::ostream &			operator<<( std::ostream & o, StringVector const & i );

#endif /* STRINGVECTOR_HPP */
