/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:20 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/14 21:47:58 by nolecler         ###   ########.fr       */
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
        Brain* _brain;

};