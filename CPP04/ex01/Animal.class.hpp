/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:57:24 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/14 16:48:25 by sammeuss         ###   ########.fr       */
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
		virtual ~Animal();
		Animal & operator=(Animal const &rhs);
		virtual void	make_sound() const;
		string			get_type() const;
	protected:
		string	_type;
};

#endif