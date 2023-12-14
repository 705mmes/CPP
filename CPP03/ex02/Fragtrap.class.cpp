/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:24:29 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 16:29:20 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.class.hpp"

Fragtrap::Fragtrap() : Claptrap()
{
	cout << "FragTrap constructor" << endl;
	return ;
}

Fragtrap::Fragtrap(string name) : Claptrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	cout << "FragTrap constructor" << endl;
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
	cout << "FragTrap destructor" << endl;
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
	cout << "Fragtrap slaps nothing" << endl;
	return ;
}
