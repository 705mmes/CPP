/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:16:15 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/26 14:45:15 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP
# include <iostream>
# include <ostream>
# include <stdexcept>
# include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form
{
	public :
		// Form();
		Form(std::string name, const unsigned int s, const unsigned int e);
		Form(const Form &src);
		~Form();
		const Form	&operator=(const Form &rhs);
		const std::string get_name() const;
		bool	get_signed() const;
		unsigned int get_s() const;
		unsigned int get_e() const;
		void	be_signed(const Bureaucrat b);
		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char* what() const throw();
		};
 	private :
		const std::string _name;
		bool	_signed;
		const	unsigned int _signing_g;
		const	unsigned int _exec_g;

};

std::ostream   &operator<<(std::ostream &o, Form const &rhs);

#endif
