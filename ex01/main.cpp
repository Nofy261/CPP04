/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:21:15 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/14 14:15:39 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// a garder wrongAnimal??

// int main()
// {
    
//     const Animal* j = new Dog();
//     std::cout << std::endl;
    
//     const Animal* i = new Cat();
//     std::cout << std::endl;
//     std::cout << i->getType() << std::endl;
    
//     i->makeSound();
//     j->makeSound();

//     delete i;
//     delete j;
    
//     return 0;
// }

int main()
{
    const int N = 10;
    Animal* animals[N];  // 1. Tableau de pointeurs Animal*

    // 2. Remplir moitié Dog, moitié Cat
    for (int i = 0; i < N / 2; ++i)
        animals[i] = new Dog();
    for (int i = N / 2; i < N; ++i)
        animals[i] = new Cat();

    // 3. Tester avec makeSound() (polymorphisme)
    for (int i = 0; i < N; ++i)
        animals[i]->makeSound();

    // 4. Supprimer chaque Animal via pointeur base
    for (int i = 0; i < N; ++i)
        delete animals[i];

    return 0;
}
