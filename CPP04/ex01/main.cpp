/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:00:06 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/04 14:46:18 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "Wrong_cat.class.hpp"

int main()
{
	const	Animal	*hound[6];
	for (int i = 0; i < 6; i++)
	{
		if (i >= 3)
			hound[i] = new Cat();
		else
			hound[i] = new Dog();
	}
	for (int i = 0; i < 6; i++)
		delete hound[i];
	return 0;
}
