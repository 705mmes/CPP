/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:02:08 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/29 19:48:35 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.class.hpp"

/*Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, and writes ASCII trees
inside it.*/

class AForm;


class Shrubbery : public AForm
{
	public:
		Shrubbery();
		Shrubbery(std::string target);
		Shrubbery(Shrubbery const &src);
		virtual ~Shrubbery();
		virtual void	execute(Bureaucrat const &executor) const;
		std::string		get_output() const;
		void	fill_o(std::ostream &o) const;	
		Shrubbery &operator=(Shrubbery const &rhs);
	private:
		std::string _target;
		std::string	_output;
};

#endif