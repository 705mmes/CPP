/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:56:03 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/24 15:54:56 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	cout << this->name << " has been destroyed" << endl;
	return ;
}

void	Zombie::announce() const
{
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
	return ;
}

// seter pour modifier des attributs privés
void	Zombie::setName(string name)
{
	this->name = name;
	return ;
}
