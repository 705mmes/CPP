/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:59:06 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/09 10:22:41 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		Span	&operator=(const Span &rhs);
		~Span();
		void	print_vector();
		void	addNumber(int nb);
		void	addNumbers(int nb, int count);
		int 	shortestSpan();
		int		longestSpan();
	private:
		unsigned int		_max;
		std::vector<int>	_tab;
};

class NoSpaceException : public std::exception {
	public:
		const char*	what() const throw() {
			return ("No space left in device");
		};
};

#endif
