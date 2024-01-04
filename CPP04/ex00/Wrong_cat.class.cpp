/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong_cat.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:56:19 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 13:00:10 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong_cat.class.hpp"

Wrong_cat::Wrong_cat()
{
	std::cout << "Wrong_cat default constructor called" << std::endl;
	return ;
}

Wrong_cat::Wrong_cat(Wrong_cat const &src)
{
	std::cout << "Wrong_cat copy constructor called" << std::endl;
	this->_type = src._type;
	return ;
}

Wrong_cat::~Wrong_cat()
{
	std::cout << "Wrong_cat default destructor called" << std::endl;
	return ;
}

Wrong_cat &Wrong_cat::operator=(Wrong_cat const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}
