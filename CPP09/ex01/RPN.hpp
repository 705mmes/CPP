/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:56:23 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/28 12:09:40 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <algorithm>
# include <limits>
# include <cstring>

class RPN
{
	public:
		RPN();
		RPN(std::string	calcul);
		RPN(const RPN &src);
		RPN	&operator=(const RPN &rhs);
		bool	parse_input() const;
		void	do_your_thing();
		int		is_sign(char c) const;
		int 	do_op(char	sign, int	first, int second) const;
		int		get_result() const;
		~RPN();
	private:
		std::string		_calcul;
		std::stack<int>	_stack;
		int				_result;
};

class SyntaxException : public std::exception {
	public:
		const char*	what() const throw() {
			return ("Syntax error");
		};
};

#endif