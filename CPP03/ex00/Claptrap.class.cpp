/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:20:08 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 14:02:32 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"

Claptrap::Claptrap()
{
	return ;
}

Claptrap::Claptrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	std::cout << "Default construcor called" << std::endl;
	return ;
}

Claptrap::~Claptrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Claptrap::Claptrap(const Claptrap &src)
{
	*this = src;
	return ;
}

Claptrap	&Claptrap::operator=(const Claptrap &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_attack_dmg = rhs._attack_dmg;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;
	this->_name = rhs._name;
	return (*this);
}

void	Claptrap::attack(const std::string &target)
{
	if (this->_energy_points > 0)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target << " for " << this->_attack_dmg << "points of damage" << std::endl;
		this->_energy_points--;
	}
	else
		std::cout << this->_name << " is exhausted" << std::endl;
	return ;
}

void	Claptrap::take_dmg(unsigned int amount)
{
	std::cout << "Claptrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
	this->_hit_points -= amount;
	if (_hit_points <= 0)
	{
		std::cout << "Claptrap " << this->_name << " is ded" << std::endl;
		exit(0);
	}
	return ;
}

void	Claptrap::be_repaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		std::cout << "Claptrap " << this->_name << " gains " << amount << " hit points" << std::endl;
		this->_hit_points+= amount;
		this->_energy_points--;
	}
	else
		std::cout << "Claptrap " << this->_name << " is exhausted" << std::endl;
	return ;
}

int	Claptrap::get_hit_points() const
{
	return (this->_hit_points);
}

int	Claptrap::get_energy_points() const
{
	return (this->_energy_points);
}
