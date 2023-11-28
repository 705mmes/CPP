/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:16:51 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/28 16:16:14 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type) : _type(type)
{
	cout << this->_type << " created" << endl;
	return ;
}

Weapon::~Weapon()
{
	cout << this->_type << " destroyed" << endl;
	return ;
}

string	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(string new_type)
{
	this->_type = new_type;
	return ;
}
