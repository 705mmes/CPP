/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.private.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:59:36 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/09 23:47:25 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void	Phonebook::add()
{
	ask_user();
	c_index++;
	if (nb_contact < 8)
		nb_contact++;
	Contact[c_index].nb = c_index;
	return ;
}

void	Phonebook::search() const
{
	int	who = 0;

	print_phonebook();
	std::cout << "Who : ";
	std::cin >> who;
	while (who > nb_contact - 1 || who < 0)
	{
		std::cout << "Try again" << std::endl << "Who : ";
		std::cin >> who;
	}
	print_contact(who);
	return ;
}

void	Phonebook::print_phonebook() const
{
	int	i = 0;

	while (i < nb_contact)
	{
		if (std::strlen(Contact[i].first_name.c_str()) > 10)
			std::cout << "| " << Contact[i].nb << " | " << (Contact[i].first_name).substr(0, 9) << ".";
		else
			std::cout << " | " << Contact[i].nb << " | " << Contact[i].first_name;
		if (std::strlen(Contact[i].last_name.c_str()) > 10)
			std::cout << " | " << Contact[i].last_name.substr(0, 9) << "." << " | ";
		else
			std::cout << " | " << Contact[i].last_name<< " | ";
		if (std::strlen(Contact[i].nickname.c_str()) > 10)
			std::cout << Contact[i].nickname.substr(0, 9) << "." << " | " << std::endl;
		else
			std::cout << Contact[i].nickname << " | " << std::endl;
		i++;
	}
}

void	Phonebook::print_contact(int i) const
{
	std::cout << "| " << "First name" << " | " << Contact[i].first_name << " |" << std::endl;
	std::cout << "| " << "Last name" << " | " << Contact[i].last_name << " |" << std::endl;
	std::cout << "| " << "Nickname" << " | " << Contact[i].nickname << " |" << std::endl;
	std::cout << "| " << "Phone number" << " | " << Contact[i].phone_number << " |" << std::endl;
	std::cout << "| " << "Darkest secret" << " | " << Contact[i].darkest_secret << " |" << std::endl;
}

void	Phonebook::ask_user()
{
	// while (Contact[c_index].first_name.size() == 0)
	// {
	std::cout << "Firstname : ";
	std::cin >> Contact[c_index].first_name;
	//}
	std::cout << "Lastname : ";
	std::cin >> Contact[c_index].last_name;
	std::cout << "Nickname : ";
	std::cin >> Contact[c_index].nickname;
	std::cout << "Phone number : ";
	std::cin >> Contact[c_index].phone_number;
	std::cout << "Darkest secret : ";
	std::cin >> Contact[c_index].darkest_secret;
}