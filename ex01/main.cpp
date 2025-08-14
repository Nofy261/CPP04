/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:21:15 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/14 15:16:44 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
    const int N = 10;
    Animal* animals[N];  // 1. Tableau de pointeurs Animal*

    for (int i = 0; i < 10; ++i)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < N; ++i)
        animals[i]->makeSound();
    for (int i = 0; i < N; ++i)
        delete animals[i];

    return (0);
}
