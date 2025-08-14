/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:19:17 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/14 10:51:36 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
    // for (int i = 0; i < 100; i++)
    // {
    //     this->_ideas[i] = "";
    // }
}

Brain::Brain(const Brain &copy) // on creer un nouvel objet
{
    std::cout << "Brain copy constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = copy._ideas[i];
    }
}


// on modifie les valeurs d'un objet deja existant
Brain& Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignation operator called." << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = other._ideas[i];
    }
    return (*this);
}


Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}


const std::string& Brain::getIdeas(size_t index) const
{
    if (index < 100)
        return (this->_ideas[index]);
    std::cout << "Invalid index!" << std::endl;
    return (this->_ideas[0]); 
}


void Brain::setIdeas(size_t index, const std::string &idea)
{
    if (index < 100)
        this->_ideas[index] = idea;
    else
        std::cout << "There is only 100 ideas per brain." << std::endl;
}

