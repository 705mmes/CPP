/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:20:08 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 14:50:06 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"

Claptrap::Claptrap()
{
	return ;
}

Claptrap::Claptrap(string name) : _name(name), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	cout << "Default construcor called" << endl;
	return ;
}

Claptrap::~Claptrap()
{
	cout << "Destructor called" << endl;
	return ;
}

void	Claptrap::attack(const string &target)
{
	if (this->_energy_points > 0)
	{
		cout << "Claptrap " << this->_name << " attacks " << target << " for " << this->_attack_dmg << "points of damage" << endl;
		this->_energy_points--;
	}
	else
		cout << this->_name << " is exhausted" << endl;
	return ;
}

void	Claptrap::take_dmg(unsigned int amount)
{
	cout << "Claptrap " << this->_name << " takes " << amount << " points of damage" << endl;
	this->_hit_points -= amount;
	if (_hit_points <= 0)
	{
		cout << "Claptrap " << this->_name << " is ded" << endl;
		exit(0);
	}
	return ;
}

void	Claptrap::be_repaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		cout << "Claptrap " << this->_name << " gains " << amount << " hit points" << endl;
		this->_hit_points+= amount;
		this->_energy_points--;
	}
	else
		cout << "Claptrap " << this->_name << " is exhausted" << endl;
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
