/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:23:18 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/13 16:32:23 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP
# include "Claptrap.class.hpp"
# include <iostream>
# include <fstream>
# include <cmath>
# include <string>

using namespace std;

class	Fragtrap : public Claptrap
{
	public:
		Fragtrap();
		Fragtrap(string name);
		Fragtrap(const Fragtrap &src);
		~Fragtrap();
		Fragtrap & operator=(const Fragtrap & rhs);
		void	high_five_guys();
};

#endif