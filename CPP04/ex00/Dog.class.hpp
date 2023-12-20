/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:02 by sammeuss          #+#    #+#             */
/*   Updated: 2023/12/14 15:41:31 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>
# include "Animal.class.hpp"

using namespace std;

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();
		Dog & operator=(Dog const &rhs);
		void	make_sound() const;
};

#endif
