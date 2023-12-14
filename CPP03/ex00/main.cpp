/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:20:05 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 14:40:38 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.class.hpp"
#include "Scavtrap.class.hpp"

int main()
{
	Claptrap	me("sam");

	while (me.get_energy_points() > 0)
	{
		me.attack("leon");
		me.take_dmg(4);
		cout << "got " << me.get_hit_points() << " hit points left" << endl;
		me.be_repaired(2);
		cout << "got " << me.get_hit_points() << " hit points left" << endl;
	}
	return (0);
}
