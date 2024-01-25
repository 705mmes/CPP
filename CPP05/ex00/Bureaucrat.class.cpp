/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:11:10 by smunio            #+#    #+#             */
/*   Updated: 2024/01/25 12:01:21 by smunio           ###   ########.fr       */
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
    std::cout << "Default Bureaucrat constructor called" << std::endl;
    try
    {
        this->_grade = grade;
        if (grade > 150 || grade < 1)
            throw std::exception();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Grade should be between 1 and 150" << std::endl;
    }
    
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

std::ostream const & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.get_name() << " bureaucrat grade " << rhs.get_grade() << std::endl;
    return (o);
}
