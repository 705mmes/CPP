/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:17:12 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/26 14:58:49 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

// Form::Form()
// {
// 	std::cout << "Default From constructor called" << std::endl;
// 	return ;
// }

Form::Form(std::string name, const unsigned int s, const unsigned int e) :
	_name(name), _signing_g(s), _exec_g(e)
{
	std::cout << "Default From constructor called" << std::endl;
	return ;
}

Form::Form(const Form &src) :
	_name(src._name), _signing_g(src._signing_g), _exec_g(src._exec_g)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
	return ;
}

Form::~Form()
{
	std::cout << "Default From constructor called" << std::endl;
	return ;
}

const std::string Form::get_name() const
{
	return (this->_name);
}

bool Form::get_signed() const
{
	return (this->_signed);
}

unsigned int Form::get_s() const
{
	return (this->_signing_g);
}

unsigned int Form::get_e() const
{
	return (this->_exec_g);
}

const Form&	Form::operator=(const Form &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_signed = rhs._signed;
	// this->_exec_g = rhs._exec_g;
	// this->_name = rhs._name;
	// this->_signing_g = rhs._signing_g;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

void	Form::be_signed(const Bureaucrat b)
{
	try
	{
		if (b.get_grade() > this->_signing_g)
			throw GradeTooLowException();
		std::cout << this->_name << " succesfully signed" << std::endl;		
		this->_signed = true;
	}
	catch (const GradeTooLowException &e)
	{
		std::cerr << b.get_name() << " couldn't sign form because " << e.what() << std::endl;
		return ;
	}
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.get_name() << std::endl
	<< "signed: " << rhs.get_signed() << std::endl
	<< "signing rank: " << rhs.get_s() << std::endl
	<< "exec rank: " << rhs.get_e() << std::endl; 

	return (o);
}
