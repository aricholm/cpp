/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:33:53 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/31 16:20:00 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	public:

										PresidentialPardonForm(std::string target);
										~PresidentialPardonForm();
	private:
										PresidentialPardonForm( PresidentialPardonForm const & src );
		using 							AForm::operator=;
		virtual void					_doit() const;
};


#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
