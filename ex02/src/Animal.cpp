/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:34 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/14 21:44:40 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Default")
{
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called." << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignation operator called." << std::endl;
    this->_type = other._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}