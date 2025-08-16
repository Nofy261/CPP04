/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:39 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/16 13:09:37 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called." << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called." << std::endl;
    this->_brain = new Brain(*copy._brain);
}


Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignation operator called." << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
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
