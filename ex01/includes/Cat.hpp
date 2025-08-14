/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:17:15 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/14 11:07:40 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &other);
        ~Cat();
  
        void makeSound() const;
        Brain* getBrain() const;
        
        
    private :
        Brain* _brain; // pointeur vers un objet de type Brain
        //cat contient une adresse memoire (un pointeur vers Brain)
        // peut pointer vers null

};

// Chaque fois qu’un Dog ou un Cat est créé, il a son propre cerveau (Brain),
// et ce cerveau contient 100 emplacements pour des idées (std::string).