/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:01:18 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/28 14:56:07 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

using namespace std;

class Weapon
{
	public:
		Weapon(string type);
		~Weapon();
	string	getType() const;
	void	setType(string new_type);
	private:
		string	_type;
};

#endif