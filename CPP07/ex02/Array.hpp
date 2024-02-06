/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:08:32 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/06 11:48:11 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <ctime>
# include <cstdlib>

template <typename T>
class Array
{
	public:
		Array<T>() {
			this->array = new T[1] ;
		};
		Array<T>(const unsigned int n) : _size(n){
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
			this->_size = rhs._size;
			this->array = new T[rhs._size];
			for (int i = 0; i < rhs._size; i++)
				this->array[i] = rhs.array[i];
			return (*this);
		};
		T &operator[](int i) {
			if (i < 0 || i >= _size)
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
		int _size;
		T	*array;
};

#endif
