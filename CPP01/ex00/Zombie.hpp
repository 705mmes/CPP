/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:27:18 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/24 14:15:04 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

using namespace std;

class Zombie
{
	public:
		Zombie(string name);
		~Zombie();
		void	announce(void) const;
	private:
		string	name;
};

Zombie	*newZombie(string name);
void	randomChump(string name);

#endif