/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:07:29 by smunio            #+#    #+#             */
/*   Updated: 2024/01/26 14:56:42 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP
# include <iostream>
# include <ostream>
# include <stdexcept>
# include "Form.class.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat();
        Bureaucrat(const std::string name, unsigned int grade);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();
        Bureaucrat  const   &operator=(const Bureaucrat  &rhs);
        std::string get_name() const;
        unsigned int    get_grade() const;
        void    sign_form(Form  &f) const;
        class GradeTooHighException : public std::exception {
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public :
				virtual const char* what() const throw();
		};
    private:
        const std::string _name;
        unsigned    int _grade;
};

std::ostream   &operator<<(std::ostream & o, Bureaucrat const &rhs);

#endif
