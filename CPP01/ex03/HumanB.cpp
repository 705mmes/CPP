/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:29:44 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/28 16:22:17 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name) : _name(name), _weapon(NULL)
{
	cout << this->_name << " created" << endl;
	return ;
}

HumanB::~HumanB()
{
	cout << this->_name << " destroyed" << endl;
	return ;
}

void	HumanB::attack() const
{
	cout << this->_name << " attacks with their " << this->_weapon->getType() << endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
