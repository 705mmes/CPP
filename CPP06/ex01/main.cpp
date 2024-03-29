/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:06:26 by smunio            #+#    #+#             */
/*   Updated: 2024/02/01 15:42:52 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.class.hpp"

int main(void)
{
    Data    d;
    d.val = 42;

    Data    *ptr = &d;

    std::cout << d.val << " " << &d << std::endl;

    uintptr_t   o = Serializer::serialize(ptr);
    ptr = Serializer::deserialize(o);
    
    std::cout << ptr->val << " " << ptr << std::endl;
    return (0);
}