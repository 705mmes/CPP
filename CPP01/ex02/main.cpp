/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:02:49 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/03 11:11:54 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str adress= " << &str << "\nptr address= " << stringPTR << "\nref address= " << &stringREF << std::endl;
	std::cout << "str value= " << str << "\nptr value= " << *stringPTR << "\nref value= " << stringREF << std::endl;
	return (0);
}
