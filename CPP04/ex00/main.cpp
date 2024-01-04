/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:00:06 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 12:59:15 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "Wrong_cat.class.hpp"

int main()
{
	const Wrong_animal*	w = new Wrong_animal();
	const Wrong_cat*	wc = new Wrong_cat();
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	w->make_sound();
	wc->make_sound();
	i->make_sound(); //will output the cat sound!
	j->make_sound();
	meta->make_sound();
	delete meta;
	delete j;
	delete i;
	delete w;
	delete wc;
	return 0;
}
