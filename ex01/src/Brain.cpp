/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:19:17 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/15 17:02:51 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called." << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = copy._ideas[i];
    }
}


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


const std::string* Brain::getIdeas(void) const
{
    return (this->_ideas);
}

