/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.functions.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:04:39 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/11 11:09:44 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"

void	Claptrap::attack(const std::string &target)
{
	std::cout << this->_hit_points << std::endl << this->_energy_points << std::endl;
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << this->_name << " attacks " << target << " for " << this->_attack_dmg << "points of damage" << std::endl;
		this->_energy_points--;
	}
	if (this->_energy_points <= 0)
		std::cout << this->_name << " tries to attack but is exhausted" << std::endl;
	else if (this->_hit_points <= 0)
		std::cout << this->_name << " tries to attack but is ded" << std::endl;
	return ;
}

void	Claptrap::take_dmg(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " points of damage" << std::endl;
	if (_hit_points > 0)
		this->_hit_points -= amount;
	return ;
}

void	Claptrap::be_repaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << this->_name << " gains " << amount << " hit points" << std::endl;
		this->_hit_points+= amount;
		this->_energy_points--;
	}
	if (this->_energy_points <= 0)
		std::cout << this->_name << " tries to repair but is exhausted" << std::endl;
	else if (this->_hit_points <= 0)
		std::cout << this->_name << " tries to repair but is ded" << std::endl;
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

std::string	Claptrap::get_name() const
{
	return (this->_name);
}
