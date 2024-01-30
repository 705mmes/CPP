/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:17:12 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/30 10:24:16 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.class.hpp"

AForm::AForm() : _signing_g(150), _exec_g(150)
{
	std::cout << "Default Form constructor called" << std::endl;
	return ;
}

AForm::AForm(std::string name, const unsigned int s, const unsigned int e) :
	_name(name), _signing_g(s), _exec_g(e)
{
	std::cout << "Default Form constructor called" << std::endl;
	return ;
}

AForm::AForm(const AForm &src) :
	_name(src._name), _signing_g(src._signing_g), _exec_g(src._exec_g)
{
	std::cout << "AForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

AForm::~AForm()
{
	std::cout << "Default Form destructor called" << std::endl;
	return ;
}

const std::string AForm::get_name() const
{
	return (this->_name);
}

bool AForm::get_signed() const
{
	return (this->_signed);
}

unsigned int AForm::get_s() const
{
	return (this->_signing_g);
}

unsigned int AForm::get_e() const
{
	return (this->_exec_g);
}

AForm&	AForm::operator=(const AForm &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_signed = rhs._signed;
	// this->_exec_g = rhs._exec_g;
	// this->_name = rhs._name;
	// this->_signing_g = rhs._signing_g;
	return (*this);
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::FormSignedException::what() const throw()
{
	return ("Form is not signed");
}

void	AForm::be_signed(const Bureaucrat &b)
{
	if (b.get_grade() > this->_signing_g)
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_name << " succesfully signed" << std::endl;		
	this->_signed = true;
	return ;
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
	o << rhs.get_name() << std::endl
	<< "signed: " << rhs.get_signed() << std::endl
	<< "signing rank: " << rhs.get_s() << std::endl
	<< "exec rank: " << rhs.get_e() << std::endl; 

	return (o);
}
