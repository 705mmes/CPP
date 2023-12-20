/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:44:14 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/15 14:50:21 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>

using namespace std;

class Brain
{
	public:
		Brain();
		Brain(Brain const &src);
		virtual ~Brain();
		Brain & operator=(Brain const &rhs);
	private:
		string	ideas[100];
};

#endif