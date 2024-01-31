/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:57:46 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/31 14:59:29 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

Scalar::Scalar()
{
	std::cout << "Default Scalar constructor called" << std::endl;
	return ;
}

Scalar::~Scalar()
{
	std::cout << "Default Scalar destructor called" << std::endl;
	return ;
}

void Scalar::convert(std::string s)
{
	if (is_char(s))
		to_char(s);
	else if(is_int(s))
		to_int(s);
	else if(is_float(s))
		to_float(s);
	else if(is_double(s))
		to_double(s);
	else
		std::cerr << "Can't find type" << std::endl;
	return ;
}

bool	is_double(std::string s)
{
	int d = 0;
	int i = 0;

	while(s[i])
	{
		if (s[i] != '.' && !(s[i] >= 48 && s[i] <= 57))
			return (false);
		if (s[i] == '.')
			d++;
		i++;
	}
	if (d == 1)
		return (true);
	else
		return (false);
}

void	to_double(std::string s)
{
	double tmp = std::atof(s.c_str());

	std::cout << "char: " << static_cast<char>(tmp) << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << static_cast<float>(tmp) << std::fixed << std::endl;
	std::cout << "double: " << tmp << std::fixed << std::endl;
}

bool	is_float(std::string s)
{
	int d = 0;
	unsigned long i = 0;

	while(i < s.length() - 1)
	{
		if (s[i] != '.' && !(s[i] >= 48 && s[i] <= 57))
			return (false);
		if (s[i] == '.')
			d++;
		i++;
	}
	if (d == 1 && s[i] == 'f')
		return (true);
	else
		return (false);
}

void	to_float(std::string s)
{
	float	tmp = std::atof(s.c_str());

	std::cout << "char: " << static_cast<char>(tmp) << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << tmp << std::fixed <<  std::endl;
	std::cout << "double: " << static_cast<double>(tmp) << std::fixed << std::endl;
}

bool	is_int(std::string s)
{
	for (int i = 0; s[i]; i++)
	{
		if(!(s[i] >= 48 && s[i] <= 57))
			return (false);
	}
	if (std::atoi(s.c_str()) > 2147483647 || std::atoi(s.c_str()) < -2147483648)
		return (false);
	return (true);
}

void	to_int(std::string s)
{
	int tmp = std::atoi(s.c_str());

	std::cout << "char: " << static_cast<char>(tmp) << std::endl;
	std::cout << "int: " << tmp << std::endl;
	std::cout << "float: " << static_cast<float>(tmp) << std::fixed << std::endl;
	std::cout << "double: " << static_cast<double>(tmp) << std::fixed << std::endl;
}

bool	is_char(std::string s)
{
	int i = 0;
	while(s[i])
		i++;
	if (i == 1 && s[i - 1] >= 33 && s[i - 1] <= 126)
		return (true);
	else
		return (false);
}

void	to_char(std::string s)
{
	std::cout << "char: " << s[0] << std::endl;
	std::cout << "int: " << std::atoi(s.c_str()) << std::endl;
	std::cout << "float: " << static_cast<float>(atoi(s.c_str())) << std::fixed << std::endl;
	std::cout << "double: " << static_cast<double>(atoi(s.c_str())) << std::fixed << std::endl;
	return ;
}
