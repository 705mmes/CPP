/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.public.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:57:30 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/09 23:54:05 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{
	std::cout << "Phonebook constructor called" << std::endl;
	exit = 0;
	c_index = 0;
	nb_contact = 0;
	return ;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called" << std::endl;
	return ;
}

char	Phonebook::check_line() const
{
	if (!std::strncmp(line.c_str(), "ADD", std::strlen(line.c_str()) + 1))
		return ('A');
	else if (!std::strncmp(line.c_str(), "SEARCH", std::strlen(line.c_str()) + 1))
		return ('S');
	else if (!std::strncmp(line.c_str(), "EXIT", std::strlen(line.c_str()) + 1))
		return ('E');
	else
		return (0);
}

void	Phonebook::choose_command()
{
	if (c_index > 7)
		c_index = 0;
	if (command == 'A')
		add();
	else if (command == 'S')
		search();
	else if (command == 'E')
		exit++;
	return ;
}
