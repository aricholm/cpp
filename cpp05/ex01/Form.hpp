/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 10:08:30 by aricholm          #+#    #+#             */
/*   Updated: 2022/08/31 16:13:16 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{

	public:

							Form(std::string name, int grade = 150, int exec = 1);
							~Form();

		void				beSigned(Bureaucrat & b);

		std::string			getName() const;
		int					getGrade() const;
		int					getExec() const;
		bool				isSigned() const;
		
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw(); };
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw(); };

	private:
							Form( Form const & src );
		Form &				operator=( Form const & rhs );
		const std::string	_name;
		const int			_grade;
		const int			_execute;
		bool				_signed;
		

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* FORM_HPP */
