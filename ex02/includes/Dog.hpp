/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:23 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/14 21:34:43 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public :
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &other);
        ~Dog();

        void makeSound() const;
        Brain* getBrain() const;

    private :
        Brain* _brain;
};
