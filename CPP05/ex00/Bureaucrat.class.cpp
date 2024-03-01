/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smunio <smunio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:11:10 by smunio            #+#    #+#             */
/*   Updated: 2024/02/22 09:27:26 by smunio           ###   ########.fr       */
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
    try
    {
        if (grade > 150)
            throw GradeTooLowException();
        else if (grade < 1)
            throw GradeTooHighException();
        else
        {
            std::cout << "Default Bureaucrat constructor called" << std::endl;
            this->_grade = grade;
            return ;
        }
    }
    catch (const GradeTooHighException &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    catch (const GradeTooLowException &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    this->_grade = 150;
    return ;
        
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

void    Bureaucrat::decrement_grade()
{
    try
    {
        if (this->_grade == 150)
            throw GradeTooLowException();
        this->_grade++;
    }
    catch (const GradeTooLowException   &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
        return ;
    }
}

void    Bureaucrat::increment_grade()
{
    try
    {
        if (this->_grade == 1)
            throw GradeTooHighException();
        this->_grade--;
    }
    catch (const GradeTooLowException   &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
        return ;
    }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.get_name() << " bureaucrat grade " << rhs.get_grade() << std::endl;
    return (o);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}
