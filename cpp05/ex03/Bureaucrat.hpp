/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:20:25 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/26 16:12:40 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AForm.hpp"

class AForm;
class Bureaucrat
{

	public:

							Bureaucrat(const std::string name, int grade = 150);
							Bureaucrat( Bureaucrat const & src );
							~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		const std::string&	getName() const;
		int					getGrade() const;
		void				promotion(int grade = 1);
		void				demotion(int grade = 1);
		void				signForm(AForm& f) const;
		void				executeForm(const AForm& f) const;
		
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw(); };
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw(); };

	private:
							Bureaucrat();
		const std::string	_name;
		int					_grade;
		
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* BUREAUCRAT_HPP */
