/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:46:36 by smunio            #+#    #+#             */
/*   Updated: 2024/01/30 11:02:18 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.class.hpp"

int main(void)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    Intern someRandomIntern;
    AForm* rrf;
    try
    {
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
    }
    catch (const Intern::WrongNameException &e)
    {
        std::cerr << "Inter can't create form because " << e.what() << std::endl;
        return (1);
    }
    Bureaucrat me("sam", 1);
    std::cout << me;

    // AForm   *shrub = new Shrubbery("apt 11a first chamber right");
    // AForm   *robo = new Robotomy("leon");
    // AForm   *pardon = new Presidential("One nazi");

    // me.sign_form(*shrub);
    // me.executeForm(*shrub);

    me.sign_form(*rrf);
    me.executeForm(*rrf);

    // me.sign_form(*pardon);
    // me.executeForm(*pardon);

    delete rrf;
    // delete shrub;
    // delete robo;
    // delete pardon;
    
    return (0);
}
