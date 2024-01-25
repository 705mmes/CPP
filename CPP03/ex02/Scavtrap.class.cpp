/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:13 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/11 12:53:33 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.class.hpp"

Scavtrap::Scavtrap() : Claptrap()
{
	std::cout << "ScavTrap constructor" << std::endl;
	return ;
}

Scavtrap::Scavtrap(std::string name) : Claptrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap constructor" << std::endl;
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
	std::cout << "ScavTrap destructor" << std::endl;
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

void	Scavtrap::attack(const std::string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "Scavtrap " << this->_name << " attacks " << target << " for " << this->_attack_dmg << "points of damage" << std::endl;
		this->_energy_points--;
	}
	if (this->_energy_points <= 0)
		std::cout << "Claptrap " << this->_name << " is exhausted" << std::endl;
	else if (this->_hit_points <= 0)
		std::cout << "Claptrap" << this->_name << " is ded" << std::endl;
	return ;
}

void	Scavtrap::guard_guate()
{
	std::cout << "Scavtrap " << this->_name << " is now in gate mode" << std::endl;
	return ;
}
