/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:05:48 by smunio            #+#    #+#             */
/*   Updated: 2024/02/01 13:40:28 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (1);
    try
    {
        Scalar::convert(av[1]);
    }
    catch (const IntException &e)
    {
        std::cerr << "Can't convert because " << e.what() << std::endl;
    }
    return (0);
}