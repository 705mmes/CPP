/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong_cat.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:56:19 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/15 14:19:46 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong_cat.class.hpp"

Wrong_cat::Wrong_cat()
{
	cout << "Wrong_cat default constructor called" << endl;
	return ;
}

Wrong_cat::Wrong_cat(Wrong_cat const &src)
{
	cout << "Wrong_cat copy constructor called" << endl;
	this->_type = src._type;
	return ;
}

Wrong_cat::~Wrong_cat()
{
	cout << "Wrong_cat default destructor called" << endl;
	return ;
}

Wrong_cat &Wrong_cat::operator=(Wrong_cat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
