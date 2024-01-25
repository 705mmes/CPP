/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:17 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/11 11:45:34 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"
#include "Scavtrap.class.hpp"

int main()
{
	Scavtrap	me("sam");

	while (me.get_energy_points() > 0 && me.get_hit_points() > 0)
	{
		me.attack("leon");
		me.take_dmg(98);
		me.be_repaired(2);
		std::cout << me.get_name() << " got " << me.get_hit_points() << " hit points left" << std::endl;
		me.attack("leon");
	}
	return (0);
}
