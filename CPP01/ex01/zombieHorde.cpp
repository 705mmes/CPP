/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:56:01 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/24 15:47:12 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, string name)
{
	Zombie	*horde;

	horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].setName(name);
	return (horde);
}
