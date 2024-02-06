/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:08:32 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/06 10:36:27 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# define MAX_VAL 750

template <typename T>
class Array
{
	public:
		Array<T>() {
			this->array = new T[1] ;
		};
		Array<T>(const unsigned int n) {
			this->array = new T[n];
		};
		Array<T>(const Array<T> &src) {
			*this = src; 
		};
		~Array<T>() {
			if (this->array)
				delete [] this->array;
		}
		int	size() const {
			int i = 0;
			while (this->array[i])
				i++;
			return (i);
		};
		Array<T> &operator=(const Array<T> &rhs) {
			if (this == &rhs)
				return (*this);
			this->array = rhs.array;
			return (*this);
		};
		T &operator[](int i) {
			if (i < 0 || i >= MAX_VAL)
				throw TooLowException();
			return (this->array[i]);
		};
		class TooLowException : public std::exception {
			public :
				const char* what() const throw() {
					return ("Index too low or too high");
				};
		};
	private:
		T	*array;
};

#endif
