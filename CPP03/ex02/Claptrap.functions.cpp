/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.functions.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:39 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 16:10:24 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"

void	Claptrap::attack(const string &target)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		cout << "Claptrap " << this->_name << " attacks " << target << " for " << this->_attack_dmg << "points of damage" << endl;
		this->_energy_points--;
	}
	if (this->_energy_points <= 0)
		cout << "Claptrap " << this->_name << " is exhausted" << endl;
	else if (this->_hit_points <= 0)
		cout << "Claptrap" << this->_name << " is ded" << endl;
	return ;
}

void	Claptrap::take_dmg(unsigned int amount)
{
	cout << "Claptrap " << this->_name << " takes " << amount << " points of damage" << endl;
	if (_hit_points > 0)
		this->_hit_points -= amount;
	return ;
}

void	Claptrap::be_repaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		cout << "Claptrap " << this->_name << " gains " << amount << " hit points" << endl;
		this->_hit_points+= amount;
		this->_energy_points--;
	}
	if (this->_energy_points <= 0)
		cout << "Claptrap " << this->_name << " is exhausted" << endl;
	else if (this->_hit_points <= 0)
		cout << "Claptrap " << this->_name << " is ded" << endl;
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
