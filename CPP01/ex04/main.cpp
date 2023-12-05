/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:04:28 by sammeuss          #+#    #+#             */
/*   Updated: 2023/11/30 11:47:21 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "New_file.class.hpp"

/*	args: 1 filename, 2 strings
	goal: copy file into <filename>.replace, replacing every occurrence of s1 with s2.*/

int main(int ac, char **av)
{
	ifstream inputFile(av[1], ios::binary);

	if (ac != 4)
		return (cerr << "Wrong amount of args" << endl, 1);
	if (!inputFile.is_open())
		return (cerr << "Can't open source file" << endl, 1);
	New_file	file(av[2], av[3], av[1]);
	file.set_output(".replace");
	file.get_string(&inputFile);
	inputFile.close();
	return (0);
}
