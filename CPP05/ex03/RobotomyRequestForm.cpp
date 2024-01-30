/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:17:41 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/29 19:36:24 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

Robotomy::Robotomy() : AForm("robotomy request", 72, 45)
{
	std::cout << "Default Robotomy constructor called" << std::endl;
	return ;	
}

Robotomy::Robotomy(std::string target) : AForm("robotomy request", 72, 45), _target(target)
{
	std::cout << "Default Robotomy constructor called" << std::endl;
	return ;
}

Robotomy::Robotomy(Robotomy const &src) : AForm("robotomy request", 72, 45)
{
	std::cout << "Copy Robotomy constructor called" << std::endl;
	*this = src;
	return ;
}

Robotomy::~Robotomy()
{
	std::cout << "Default Robotomy destructor called" << std::endl;
	return ;
}

void	Robotomy::execute(Bureaucrat const &executor) const
{
	if (this->get_signed() != true)
			throw FormSignedException();
	if (executor.get_grade() > this->get_e())
		throw GradeTooLowException();
	std::cout << "* drilling noises *" << std::endl;
	int r = std::rand() % 101;;
	if (r <= 50)
		std::cout << this->_target << " has been robotomized succesfully" << std::endl;
	else
		std::cout << "I'm sorry for your loss..." << std::endl;
}

Robotomy &Robotomy::operator=(Robotomy const &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}