/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:34:04 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/26 16:16:40 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{

	public:

									ShrubberyCreationForm(std::string target);
									~ShrubberyCreationForm();
	private:
									ShrubberyCreationForm( ShrubberyCreationForm const & src );
		using 						AForm::operator=;
		virtual void				_doit() const;

};

#endif /* SHRUBBERYCREATIONFORM_HPP */
