/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:18:59 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/30 17:25:34 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "StringVector.hpp"

class Intern
{
	public:

							Intern();
							~Intern();

		AForm*				makeForm(const std::string formname, const std::string target) const;
		
		class FormDoesNotExist : public std::exception {
			virtual const char* what() const throw(); };
	private:
		typedef enum forms {none, presidentialp, robotomyr, shrubberyc} t_form;
		
		Intern::t_form		getForm(const std::string formname) const;
		
							Intern( Intern const & src );
		Intern &			operator=( Intern const & rhs );
		StringVector		pardon;
		StringVector		robotomy;
		StringVector		shrubbery;

};

//std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* INTERN_HPP */
