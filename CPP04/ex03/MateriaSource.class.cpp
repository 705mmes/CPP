/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:10:38 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/10 14:01:00 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource	const &src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Default MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	return ;
}

void MateriaSource::learnMateria(AMateria *m)
{
	std::cout << "learning " << m->getType() << " materia" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full." << std::endl;
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	std::cout << "creating " << type << " materia" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (type == this->inventory[i]->getType())
			return (this->inventory[i]->clone());
	}
	std::cout << "You need to learn a Materia to create it." << std::endl;
	return (NULL); 
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 4; i++)
		this->inventory[i] = rhs.inventory[i];
	return (*this);
}
