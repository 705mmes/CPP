/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:57:00 by sammeuss          #+#    #+#             */
/*   Updated: 2024/01/31 14:12:33 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>

class Scalar
{
	public:
		void static convert(std::string);
		~Scalar();
	private:
		Scalar();
};

bool	is_char(std::string s);
bool	is_int(std::string s);
bool	is_float(std::string s);
bool	is_double(std::string s);

void	to_char(std::string s);
void	to_int(std::string s);
void	to_float(std::string s);
void	to_double(std::string s);

#endif
