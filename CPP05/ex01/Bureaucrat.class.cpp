/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammeuss <sammeuss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:11:10 by smunio            #+#    #+#             */
/*   Updated: 2024/01/25 21:07:36 by sammeuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
    if (grade > 150 || grade < 1)
        throw WrongGrade(grade);
    std::cout << "Default Bureaucrat constructor called" << std::endl;
    this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Bureaucrat destructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
    return ;
}

Bureaucrat  const   &Bureaucrat::operator=(const    Bureaucrat  &rhs)
{
    if (this == &rhs)
        return (*this);
    this->_grade = rhs._grade;
    return (*this);
}

unsigned int Bureaucrat::get_grade() const
{
    return (this->_grade);
}

const std::string Bureaucrat::get_name() const
{
    return (this->_name);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.get_name() << " bureaucrat grade " << rhs.get_grade() << std::endl;
    return (o);
}

const char* WrongGrade::what() const throw()
{
    if (this->_grade < 1)
        return ("Grade is too low, it should be >= 1");
    else if (this->_grade > 150)
        return ("Grade is too high, it should be <= 150");
    return (NULL);
}
