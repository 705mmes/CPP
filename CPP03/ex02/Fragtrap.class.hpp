/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:23:18 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/20 14:11:45 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP
# include "Claptrap.class.hpp"
# include <iostream>
# include <fstream>
# include <cmath>
# include <string>

class	Fragtrap : public Claptrap
{
	public:
		Fragtrap();
		Fragtrap(std::string name);
		Fragtrap(const Fragtrap &src);
		~Fragtrap();
		Fragtrap & operator=(const Fragtrap & rhs);
		void	high_five_guys();
};

#endif