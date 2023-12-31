/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:56:01 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 11:11:09 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return (horde);
}
