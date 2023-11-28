/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:01:20 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/28 16:09:07 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

using namespace std;

class	HumanA
{
	public:
		HumanA(string name, Weapon &new_weapon);
		~HumanA();
		void	attack() const;
	private:
		string	_name;
		Weapon	&_weapon;
};

#endif
