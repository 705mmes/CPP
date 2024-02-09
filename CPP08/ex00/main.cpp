/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:17:07 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/07 14:21:46 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Easyfind.hpp"

int main()
{
	std::vector<int> tab;
	for (int i = 1; i < 6; i++)
		tab.push_back(i);
	try
	{
		easyfind<int>(tab, 3);
	}
	catch (NothingException &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}