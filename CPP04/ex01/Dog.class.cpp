/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:04:26 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/14 16:52:16 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"

Dog::Dog()
{
	cout << "Dog constructor called" << endl;
	this->_type = "Dog";
	return ;
}

Dog::Dog(Dog const &src)
{
	cout << "Dog copy constructor called" << endl;
	this->_type = src._type;
	return ;
}

Dog::~Dog()
{
	cout << "Dog destructor called" << endl;
	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Dog::make_sound() const
{
	cout << "* " << this->_type << " sound *" << endl;
	return ;
}
