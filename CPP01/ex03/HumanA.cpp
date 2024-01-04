/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:29:45 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 11:13:49 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &new_weapon) : _name(name), _weapon(new_weapon)
{
	std::cout << this->_name << " created" << std::endl;
	return ;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " destroyed" << std::endl;
	return ;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
