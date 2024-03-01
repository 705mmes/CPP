/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:46:36 by smunio            #+#    #+#             */
/*   Updated: 2024/02/22 10:35:59 by smunio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

int main(void)
{
    Bureaucrat me("sam", 74);
    std::cout << me;
    me.decrement_grade();
    std::cout << me;
    Form    Form1("form1", 75, 100);
    std::cout << Form1;
    me.sign_form(Form1);
    std::cout << Form1;
    return (0);
}
