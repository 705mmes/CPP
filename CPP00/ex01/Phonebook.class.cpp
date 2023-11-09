/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:57:30 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/09 13:41:47 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook constructor called" << std::endl;
	this->exit = 0;
	this->line = NULL;
	return ;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}
