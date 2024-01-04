/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:38:51 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/04 14:52:29 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "Wrong_cat.class.hpp"

int main()
{
	const	Dog *hound = new Dog();
	const	Cat	*catin = new Cat();
	// const	Aanimal *animal = new Aanimal();
	hound->make_sound();
	catin->make_sound();
	delete hound;
	delete catin;
	return (0);
}