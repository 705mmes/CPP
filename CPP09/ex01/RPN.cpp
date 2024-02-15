/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:57:36 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/15 11:11:39 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	std::cout << "Default RPN constructor called" << std::endl;
	return;
}

RPN::RPN(std::string calcul) : _calcul(calcul)
{
	std::cout << "Default RPN constructor called" << std::endl;
	return;
}

RPN::RPN(const RPN &src)
{
	std::cout << "Copy RPN constructor called" << std::endl;
	*this = src;
	return;
}

RPN &RPN::operator=(const RPN &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

bool RPN::parse_input() const
{
	int signs = 0;
	int digits = 0;

	if (!this->is_sign(this->_calcul[strlen(this->_calcul.c_str()) - 1]))
		return (false);
	for (size_t i = 0; this->_calcul[i]; i++)
	{
		if (this->_calcul[i] == '-' || this->_calcul[i] == '+' || this->_calcul[i] == '*' || this->_calcul[i] == '/')
			signs++;
		else if (isalnum(this->_calcul[i]))
			digits++;
		if (signs >= digits)
			return (false);
	}
	return (true);
}

void	RPN::do_your_thing()
{
	int	first = 0;
	int second = 0;
	if (!this->parse_input())
		throw SyntaxException();
	for (int i = 0; this->_calcul[i]; i++)
	{
		if (isalnum(this->_calcul[i]))
			this->_stack.push(this->_calcul[i] - '0');
		else if (is_sign(this->_calcul[i]))
		{
			second = this->_stack.top();
			this->_stack.pop();
			first = this->_stack.top();
			this->_stack.pop();
			this->_stack.push(this->do_op(this->_calcul[i], first, second));
			this->_result = this->_stack.top();
		}
	}
}

int	RPN::do_op(char sign, int first, int second) const
{
	int result = 0;

 	if (sign == '+')
		result = first + second;
	if (sign == '-')
		result = first - second;
	if (sign == '*')
		result = first * second;
	if (sign == '/')
		result = first / second;
	return (result);
}

int	RPN::is_sign(char c) const
{
	return (c == '-' || c == '+' || c == '*' || c == '/');
}

int	RPN::get_result() const
{
	return (this->_result);
}

RPN::~RPN()
{
	std::cout << "Default RPN destructor called" << std::endl;
	return;
}
