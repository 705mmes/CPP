/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:13 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 16:19:06 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.class.hpp"

Scavtrap::Scavtrap() : Claptrap()
{
	cout << "ScavTrap constructor" << endl;
	return ;
}

Scavtrap::Scavtrap(string name) : Claptrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	cout << "ScavTrap constructor" << endl;
	return ;
}

Scavtrap::Scavtrap(const Scavtrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_dmg = src._attack_dmg;
	return ;
}

Scavtrap::~Scavtrap()
{
	cout << "ScavTrap destructor" << endl;
	return ;
}

Scavtrap &Scavtrap::operator=(Scavtrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_dmg = rhs._attack_dmg;
	return (*this);
}

void	Scavtrap::attack(string target)
{
	if (this->_energy_points > 0)
	{
		cout << "Scavtrap " << this->_name << " attacks " << target << " for " << this->_attack_dmg << "points of damage" << endl;
		this->_energy_points--;
	}
	else
		cout << "Scavtrap " << this->_name << " is exhausted" << endl;
	return ;
}

void	Scavtrap::guard_guate()
{
	cout << "Scavtrap " << this->_name << " is now in gate mode" << endl;
}
