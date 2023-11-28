/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:29:45 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/28 16:15:32 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &new_weapon) : _name(name), _weapon(new_weapon)
{
	cout << this->_name << " created" << endl;
	return ;
}

HumanA::~HumanA()
{
	cout << this->_name << " destroyed" << endl;
	return ;
}

void	HumanA::attack() const
{
	cout << this->_name << " attacks with their " << this->_weapon.getType() << endl;
}
