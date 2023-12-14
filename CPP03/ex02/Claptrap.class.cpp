/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:15 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 15:19:32 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"

Claptrap::Claptrap()
{
	cout << "ClapTrap constructor" << endl;
	return ;
}

Claptrap::Claptrap(string name) : _name(name), _hit_points(10), _energy_points(10), _attack_dmg(0)
{
	cout << "Claptrap construcor called" << endl;
	return ;
}

Claptrap::Claptrap(const Claptrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_dmg = src._attack_dmg;
	return ;
}

Claptrap::~Claptrap()
{
	cout << "Claptrap Destructor called" << endl;
	return ;
}

Claptrap &Claptrap::operator=(Claptrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_dmg = rhs._attack_dmg;
	return (*this);
}
