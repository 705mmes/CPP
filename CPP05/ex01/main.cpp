/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:46:36 by smunio            #+#    #+#             */
/*   Updated: 2024/01/26 14:52:08 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

int main(void)
{
    Bureaucrat me("sam", 80);
    std::cout << me;
    Form    Form1("form1", 75, 100);
    std::cout << Form1;
    me.sign_form(Form1);
    std::cout << Form1;
    return (0);
}
