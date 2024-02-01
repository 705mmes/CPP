/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:57:46 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/01 12:29:19 by smunio           ###   ########.fr       */
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
	if (is_float(s))
		to_float(s);
	else if(is_double(s))
		to_double(s);
	else if(is_int(s))
		to_int(s);
	else if(is_char(s))
		to_char(s);
	else if (s == "nan")
		print_nan();
	else if (s == "+inf" || s == "+inff")
		print_pinf();
	else if (s == "-inf" || s == "-inff")
		print_minf();
	else
		std::cerr << "Can't find type" << std::endl;
	return ;
}

bool	is_double(std::string s)
{
	int d = 0;
	int i = 0;
	int sign = 0;

	while(s[i])
	{
		if (s[i] != '-' && s[i] != '.' && !(s[i] >= 48 && s[i] <= 57))
			return (false);
		if (s[i] == '.')
			d++;
		if (s[i] == '-')
			sign++;
		i++;
	}
	if (d != 1 || sign > 1)
		return (false);
	else
		return (true);
}

void	to_double(std::string s)
{
	double tmp = std::atof(s.c_str());

	std::cout << std::fixed;
	if (tmp >= 0 && tmp <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else if (tmp > 127 || tmp < 32)
		std::cout << "char: Overflow" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << tmp << std::endl;
}

bool	is_float(std::string s)
{
	int d = 0;
	unsigned long i = 0;
	int	sign = 0;
	while(i < s.length() - 1)
	{
		if (s[i] != '.' && !(s[i] >= 48 && s[i] <= 57) && s[i] != '-')
			return (false);
		if (s[i] == '.')
			d++;
		if (s[i] == '-')
			sign++;
		i++;
	}
	if (d != 1 || s[i] != 'f' || sign > 1)
		return (false);
	else
		return (true);
}

void	to_float(std::string s)
{
	float	tmp = std::atof(s.c_str());

	std::cout << std::fixed;
	if (tmp >= 0 && tmp <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else if (tmp > 127 || tmp < 32)
		std::cout << "char: Overflow" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << tmp << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tmp) << std::endl;
}

bool	is_int(std::string s)
{
	int sign = 0;
	for (int i = 0; s[i]; i++)
	{
		if(s[i] != '-' && !(s[i] >= 48 && s[i] <= 57))
			return (false);
		if (s[i] == '-')
			sign++;
	}
	long	tmp = atol(s.c_str());
	if (tmp > 2147483647 || tmp < -2147483648 || sign > 1)
		throw IntException();
	return (true);
}

void	to_int(std::string s)
{
	int tmp = std::atoi(s.c_str());

	std::cout << std::fixed;
	if (tmp >= 0 && tmp <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else if (tmp > 127 || tmp < 32)
		std::cout << "char: Overflow" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;	
	std::cout << "int: " << tmp << std::endl;
	std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tmp) << std::endl;
}

bool	is_char(std::string s)
{
	int i = 0;
	while(s[i])
		i++;
	if (i == 1 && s[i - 1] >= 32 && s[i - 1] <= 127)
		return (true);
	else
		return (false);
}

void	to_char(std::string s)
{
	char tmp = s[0];

	std::cout << std::fixed;
	std::cout << "char: '" << tmp << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(tmp) << std::endl;
	std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tmp) << std::endl;
	return ;
}

void	print_nan()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	return ;
}

void	print_pinf()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: +inff" << std::endl;
	std::cout << "double: +inf" << std::endl;
	return ;
}

void	print_minf()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: imposible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inf" << std::endl;
	return ;
}

const char*	IntException::what() const throw()
{
	return  ("Int overflow");
}
