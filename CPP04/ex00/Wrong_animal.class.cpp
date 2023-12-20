/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong_animal.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:02:13 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/15 14:17:31 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong_animal.class.hpp"

Wrong_animal::Wrong_animal() : _type("Wrong_animal")
{
	cout << "Wrong_animal default constructor called" << endl;
	return ;
}

Wrong_animal::Wrong_animal(Wrong_animal const &src)
{
	cout << "Wrong_animal copy constructor called" << endl;
	this->_type = src._type;
	return ;
}

Wrong_animal::~Wrong_animal()
{
	cout << "Wrong_animal default destructor called" << endl;
	return ;
}

Wrong_animal &Wrong_animal::operator=(Wrong_animal const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void	Wrong_animal::make_sound() const
{
	cout << "* " << this->_type << " sound *" << endl;
	return ;
}
