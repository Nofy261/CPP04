/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:19:45 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/15 18:00:57 by nolecler         ###   ########.fr       */
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
    //std::cout << "Dog assignation operator called." << std::endl;
    // std::cout << "Dog assignation operator called." << std::endl;
    // std::cout << "Before delete, this->_brain = " << this->_brain << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
       // std::cout << "After new Brain, this->_brain = " << this->_brain << std::endl;
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