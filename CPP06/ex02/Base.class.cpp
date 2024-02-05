/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:05:13 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/05 10:22:31 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

Base::~Base()
{
	std::cout << "Default Base destructor called" << std::endl;
	return ;
}

A::A()
{
	std::cout << "Default A constructor called" << std::endl;
	return ;
}

B::B()
{
	std::cout << "Default B constructor called" << std::endl;
	return ;
}

C::C()
{
	std::cout << "Default C constructor called" << std::endl;
	return ;
}

A::~A()
{
	std::cout << "Default A destructor called" << std::endl;
	return ;	
}

B::~B()
{
	std::cout << "Default B destructor called" << std::endl;
	return ;	
}

C::~C()
{
	std::cout << "Default C destructor called" << std::endl;
	return ;	
}

Base	*generate(void)
{
	int w = rand() % 3;
	if (w == 2)
		return (new A());
	else if (w == 1)
		return (new B());
	else if (w == 0)
		return (new C());
	return (NULL);
}

void identify(Base* p)
{
	A	*a = dynamic_cast<A *>(p);
	if (a == NULL)
		;
	else
		std::cout << "A" << std::endl;
	B	*b = dynamic_cast<B *>(p);
	if (b == NULL)
		;
	else
		std::cout << "B" << std::endl;
	C	*c = dynamic_cast<C *>(p);
	if (c == NULL)
		;
	else
		std::cout << "C" << std::endl;
	return ;
}

void identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
