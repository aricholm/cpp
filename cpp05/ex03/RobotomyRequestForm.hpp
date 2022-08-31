/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:33:59 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/31 16:20:07 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <time.h>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

	public:

									RobotomyRequestForm(std::string target);
									~RobotomyRequestForm();
	private:
									RobotomyRequestForm( RobotomyRequestForm const & src );
		using 						AForm::operator=;
		virtual void				_doit() const;

};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
