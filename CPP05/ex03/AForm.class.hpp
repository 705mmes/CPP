/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:16:15 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/30 10:24:20 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_CLASS_HPP
# define AFORM_CLASS_HPP
# include <iostream>
# include <ostream>
# include <stdexcept>
# include <fstream>
# include <cstdlib>
# include <ctime>
# include "Bureaucrat.class.hpp"

class Bureaucrat;

class AForm
{
	public :
		AForm(std::string name, const unsigned int s, const unsigned int e);
		AForm(const AForm &src);
		virtual ~AForm();
		AForm	&operator=(const AForm &rhs);
		const std::string get_name() const;
		bool	get_signed() const;
		unsigned int get_s() const;
		unsigned int get_e() const;
		void	be_signed(const Bureaucrat &b);
		virtual void	execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char* what() const throw();
		};
		class FormSignedException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
 	private :
		AForm();
		const std::string _name;
		bool	_signed;
		const	unsigned int _signing_g;
		const	unsigned int _exec_g;

};

std::ostream   &operator<<(std::ostream &o, AForm const &rhs);

#endif
