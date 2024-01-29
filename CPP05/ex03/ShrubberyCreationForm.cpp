/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:01:53 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/29 15:14:30 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

Shrubbery::Shrubbery() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Default Shrubbery constructor called" << std::endl;
	return ;	
}

Shrubbery::Shrubbery(std::string target) : AForm("ShrubberyCreationForm", 145, 137),
	_target(target), _output(target + ".shrubbery")
{
	std::cout << "Default Shrubbery constructor called" << std::endl;
	return ;
}

Shrubbery::Shrubbery(Shrubbery const &src) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Shrubbery Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Shrubbery::~Shrubbery()
{
	std::cout << "Default Shrubbery destructor called" << std::endl;
	return ;
}

void	Shrubbery::execute(Bureaucrat const &executor) const
{
		if (this->get_signed() != true)
			throw FormSignedException();
		if (executor.get_grade() > this->get_e())
			throw GradeTooLowException();
		std::ofstream	outputFile(this->get_output());
		if (!outputFile.is_open())
			return ((void)(std::cerr << "Can't open dest file" << std::endl));
		this->fill_o(outputFile);
}

std::string	Shrubbery::get_output() const
{
	return(this->_output);
}

void	Shrubbery::fill_o(std::ostream &o) const
{
	for (int i = 0; i < 4; i++)
	{
		o << "    _-_\n";
		o << "   /~~   ~~\\\n";
		o << " /~~         ~~\\\n";
		o << "{               }\n";
		o << " \\  _-     -_  /\n";
		o << "   ~  \\\\ //  ~\n";
		o << "_- -   | | _- _\n";
		o << "  _ -  | |   -_\n";
		o << "      \\\\ \\\\\n";
	}
	return ;
}

Shrubbery	&Shrubbery::operator=(Shrubbery const &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}
