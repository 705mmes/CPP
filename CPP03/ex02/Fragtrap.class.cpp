/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:24:29 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 14:12:13 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.class.hpp"

Fragtrap::Fragtrap() : Claptrap()
{
	std::cout << "FragTrap constructor" << std::endl;
	return ;
}

Fragtrap::Fragtrap(std::string name) : Claptrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	std::cout << "FragTrap constructor" << std::endl;
	return ;
}

Fragtrap::Fragtrap(const Fragtrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_dmg = src._attack_dmg;
	return ;
}

Fragtrap::~Fragtrap()
{
	std::cout << "FragTrap destructor" << std::endl;
	return ;
}

Fragtrap &Fragtrap::operator=(Fragtrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_dmg = rhs._attack_dmg;
	return (*this);
}

void	Fragtrap::high_five_guys()
{
	std::cout << "Fragtrap slaps nothing" << std::endl;
	return ;
}
