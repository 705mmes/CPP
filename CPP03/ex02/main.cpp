/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:23:17 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/11 13:10:23 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"
#include "Scavtrap.class.hpp"
#include "Fragtrap.class.hpp"

int main()
{
	Fragtrap	me("sam");
	Scavtrap	not_me("zo");

	while (me.get_energy_points() > 0 && me.get_hit_points() > 0)
	{
		me.attack("leon");
		not_me.take_dmg(100);
		me.take_dmg(90);
		me.be_repaired(2);
		std::cout << me.get_name() << " got " << me.get_hit_points() << " hit points left" << std::endl;
	}
	not_me.guard_guate();
	me.high_five_guys();
	return (0);
}
