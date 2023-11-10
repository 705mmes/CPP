/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.private.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:59:36 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/10 12:01:22 by sammeuss         ###   ########.fr       */
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