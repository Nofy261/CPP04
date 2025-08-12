/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:24:43 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/12 15:49:56 by nolecler         ###   ########.fr       */
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
    
        virtual void makeSound() const; //const la methode ne modifie pas l objet
        std::string getType() const;
    
    protected :
        std::string _type;
};