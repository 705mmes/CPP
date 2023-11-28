/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:20:19 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/24 14:15:21 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name)
{
	this->name = name;
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
