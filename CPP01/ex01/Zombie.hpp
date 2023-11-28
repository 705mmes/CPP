/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:16:02 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/24 15:46:38 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

using namespace std;

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void) const;
		void	setName(string name);
	private:
		string	name;
};

Zombie	*zombieHorde(int n, string name);

#endif