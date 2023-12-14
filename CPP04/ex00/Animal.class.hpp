/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:57:24 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/14 13:15:34 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>

using namespace std;

class Animal
{
	public:
		Animal();
		Animal(Animal const &src);
		~Animal();
		Animal & operator=(Animal const &rhs);
	protected:
		string	_type;
};

#endif