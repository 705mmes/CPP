/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 13:20:03 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/10 13:48:33 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(std::string name) : _name(name)
{
	std::cout << "Default character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		this->floor[i] = NULL;
	return ;
}

Character::~Character()
{
	std::cout << "Default character destructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (this->floor[i] != NULL)
			delete this->floor[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	return ;
}

std::string	const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	std::cout << this->_name << " grabs " << m->getType() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full." << std::endl;
}

void	Character::unequip(int idx)
{
	if (this->inventory[idx] != NULL)
	{
		for (int i = 0; i < 100; i++)
		{
			if (this->floor[i] == NULL)
			{
				this->floor[i] = this->inventory[idx];
				break ;
			}
		}
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "Slot is already empty" << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->inventory[idx] == NULL)
		std::cout << "Can't use empty slot" << std::endl;
	else
		this->inventory[idx]->use(target);
}

Character &Character::operator=(Character const &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = rhs.inventory[i];
	return (*this);
}
