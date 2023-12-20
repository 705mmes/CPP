/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:00:04 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/14 16:52:24 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal()
{
	cout << "Animal constructor called" << endl;
	this->_type = "Animal";
	return ;
}

Animal::Animal(Animal const &src)
{
	cout << "Animal copy constructor called" << endl;
	this->_type = src._type;
	return ;
}

Animal::~Animal()
{
	cout << "Animal destructor called" << endl;
	return ;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Animal::make_sound() const
{
	cout << "* " << this->_type << " sound *" << endl;
	return ;
}

string	Animal::get_type() const
{
	return (this->_type);
}
