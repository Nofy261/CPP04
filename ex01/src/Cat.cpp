/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:19:21 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/13 12:43:17 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    this->_brain = new Brain;
    std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called." << std::endl;
    this->_brain = copy._brain;
    //*this = copy;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignation operator called." << std::endl;
    this->_type = other._type;
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaouuu!" << std::endl;
}

Brain* Cat::getBrain() const
{
    return (this->_brain);
}
