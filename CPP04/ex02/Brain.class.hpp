/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:44:14 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/04 12:39:25 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>

class Brain
{
	public:
		Brain();
		Brain(Brain const &src);
		virtual ~Brain();
		Brain & operator=(Brain const &rhs);
	private:
		std::string	ideas[100];
};

#endif