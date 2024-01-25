/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:13 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/11 11:41:09 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.class.hpp"

Scavtrap::Scavtrap() : Claptrap()
{
	return ;
}

Scavtrap::Scavtrap(std::string name) : Claptrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	return ;
}

Scavtrap::Scavtrap(const Scavtrap &src)
{
	std::cout << "Scavtrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

Scavtrap::~Scavtrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

Scavtrap &Scavtrap::operator=(Scavtrap const & rhs)
{
	if (this == &rhs)
		return (*this);
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
		std::cout << "Scavtrap " << this->_name << " tries to attack but is exhausted" << std::endl;
	else if (this->_hit_points <= 0)
		std::cout << "Scavtrap " << this->_name << " tries to attack but is ded" << std::endl;
	return ;	
}

void	Scavtrap::guard_guate()
{
	std::cout << "Scavtrap " << this->_name << " is now in gate keeper mode" << std::endl;
}
