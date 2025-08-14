/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:25:04 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/12 16:24:01 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//      std::cout << j->getType() << " " << std::endl;
//      std::cout << i->getType() << " " << std::endl;
    
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();

//     delete j;
//     delete i;
//     delete meta;
//     return 0;
// }

int main() // Test WrongClass
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
    
    std::cout << i->getType() << std::endl;
    
    i->makeSound();
    meta->makeSound();

    delete i;
    delete meta;
    return 0;
}