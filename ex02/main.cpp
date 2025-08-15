/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:51 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/15 16:42:24 by nolecler         ###   ########.fr       */
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
    std::cout << std::endl;
    //const Animal a; // test1 ne fonctionne pas car fonction abstraite donc ne peut pas etre instancié CQFD
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    
    // a.makeSound(); // test 1CQFD
    j->makeSound(); 
    i->makeSound();
    std::cout << std::endl;
    
    delete j;
    delete i;
    std::cout << std::endl;
    
    return (0);
}

// int main()
// {
//     const int N = 10;
//     const Animal* animal[N];
//     std::cout << std::endl;
    
//     for (int i = 0; i < 10; i++)
//     {
//         if (i < 5)
//             animal[i] = new Dog();
//         else
//             animal[i] = new Cat();
//     }
//     std::cout << std::endl;
//     for (int i = 0; i < 10; i++)
//     {
//         animal[i]->makeSound();
//     }
//     std::cout << std::endl;
//     for (int i = 0; i < 10; i++)
//     {
//         delete animal[i];
//     }
//     return (0);
// }