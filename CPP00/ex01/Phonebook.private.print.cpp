/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.private.print.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:00:03 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/10 12:51:53 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void	Phonebook::print_phonebook() const
{
	int	i = 0;

	std::cout << SEARCH_TABLE1 << SEARCH_TABLE2 << std::endl;
	while (i < nb_contact)
	{
		print_firstname(i);		
		print_lastname(i);
		print_nickname(i);
		i++;
	}
	std::cout << "|___________________________________________|" << std::endl;
}

void	Phonebook::print_contact(int i) const
{
	std::cout << "| " << "First name" << " | " << Contact[i].first_name << " |" << std::endl;
	std::cout << "| " << "Last name" << " | " << Contact[i].last_name << " |" << std::endl;
	std::cout << "| " << "Nickname" << " | " << Contact[i].nickname << " |" << std::endl;
	std::cout << "| " << "Phone number" << " | " << Contact[i].phone_number << " |" << std::endl;
	std::cout << "| " << "Darkest secret" << " | " << Contact[i].darkest_secret << " |" << std::endl;
}

void	Phonebook::print_firstname(int i) const
{
	if (std::strlen(Contact[i].first_name.c_str()) >= 10)
			std::cout <<"| " << Contact[i].nb << "   |" << (Contact[i].first_name).substr(0, 9) << "." << " |";
		else
		{
			std::cout << "| " << Contact[i].nb << "   |" << Contact[i].first_name;
			int	dif = 10 - std::strlen(Contact[i].first_name.c_str());
			for (int i = 0; i < dif; i++)
				std::cout << " ";
			std::cout << " |";
		}
}

void	Phonebook::print_lastname(int i) const
{
	if (std::strlen(Contact[i].last_name.c_str()) >= 10)
			std::cout << Contact[i].last_name.substr(0, 9) << "." << "  |";
		else
		{
			std::cout << Contact[i].last_name;
			int	dif = 10 - std::strlen(Contact[i].last_name.c_str());
			for (int i = 0; i < dif; i++)
				std::cout << " ";
			std::cout << "  |";
		}
}

void	Phonebook::print_nickname(int i) const
{
	if (std::strlen(Contact[i].nickname.c_str()) >= 10)
			std::cout << Contact[i].nickname.substr(0, 9) << "." << "  |" << std::endl;
	else
	{
		std::cout << Contact[i].nickname;
		int	dif = 10 - std::strlen(Contact[i].nickname.c_str());
		for (int i = 0; i < dif; i++)
			std::cout << " ";
		std::cout << "  |" << std::endl;
	}
}
