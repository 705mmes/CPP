/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:05:49 by sammeuss          #+#    #+#             */
/*   Updated: 2024/02/05 10:21:03 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	Base	*who;

	who = generate();
	Base	&me = *who;

	identify(who);
	identify(&me);
	return (0);
}
