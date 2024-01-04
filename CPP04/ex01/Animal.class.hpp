/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:57:24 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 13:00:44 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>

class Animal
{
	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();
		Animal & operator=(Animal const &rhs);
		virtual void	make_sound() const;
		std::string			get_type() const;
	protected:
		std::string	_type;
};

#endif