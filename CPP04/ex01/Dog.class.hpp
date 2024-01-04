/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:02 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/04 12:30:00 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# include <iostream>
# include <string>
# include <fstream>
# include <cmath>
# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();
		Dog & operator=(Dog const &rhs);
		void	make_sound() const;
	private:
		Brain	*_brain;
};

#endif
