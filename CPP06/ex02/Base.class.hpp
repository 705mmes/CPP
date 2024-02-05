/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:03:34 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/05 10:19:50 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP
# include <iostream>
# include <cstdlib> 

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		A();
		~A();
};

class B : public Base
{
	public:
		B();
		~B();
};

class C : public Base
{
	public:
		C();
		~C();
};

Base * generate(void);
/*It randomly instanciates A, B or C and returns the instance as a Base pointer. Feel free
to use anything you like for the random choice implementation.*/

void identify(Base* p);
/*It prints the actual type of the object pointed to by p: "A", "B" or "C".*/

void identify(Base& p);
/*It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
inside this function is forbidden.*/

#endif
