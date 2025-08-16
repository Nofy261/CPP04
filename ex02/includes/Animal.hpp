/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:14 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/16 13:00:47 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
    public :
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &other); 
        virtual ~Animal();
    
        virtual void makeSound() const = 0;
        std::string getType() const;
    
    protected :
        std::string _type;
};

 