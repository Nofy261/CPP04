/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:42 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/14 21:48:50 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called." << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called." << std::endl;
    this->_brain = new Brain(*copy._brain);
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called." << std::endl;
    if (this != &other)
    {
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
        Animal::operator=(other);
    }
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Ouaff!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return (this->_brain);
}