/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:02:49 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/28 11:57:40 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using	namespace std;

int main()
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << "str adress= " << &str << "\nptr address= " << stringPTR << "\nref address= " << &stringREF << endl;
	cout << "str value= " << str << "\nptr value= " << *stringPTR << "\nref value= " << stringREF << endl;
	return (0);
}
