/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:46:36 by smunio            #+#    #+#             */
/*   Updated: 2024/01/25 21:07:59 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

int main(void)
{
    try {
        Bureaucrat me("sam", 151);
        std::cout << me;
    }
    catch (const WrongGrade &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
        return (1);
    }
    return (0);
}
