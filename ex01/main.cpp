/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:21:15 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/16 12:54:56 by nolecler         ###   ########.fr       */
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
    Dog *rex = new Dog();
    std::cout << std::endl;
    
    Dog *bim = new Dog();
    std::cout << std::endl;

    rex->getBrain()->setIdea(0, "need to eat");
    bim->getBrain()->setIdea(0, "need to sleep");
    std::cout << std::endl;
    
    std::cout << "bim idea[0] before : " << bim->getBrain()->getIdea(0) << std::endl;
    std::cout << "rex idea[0] before : " << rex->getBrain()->getIdea(0) << std::endl;
    std::cout << std::endl;

    std::cout << "bim adress before : " << bim->getBrain() << std::endl;
    std::cout << "rex adress before : " << rex->getBrain() << std::endl;
    std::cout << std::endl;
    
    *bim = *rex;
    std::cout << std::endl;
    
    std::cout << "bim idea[0] after : " << bim->getBrain()->getIdea(0) << std::endl;
    std::cout << "rex idea[0] after : " << rex->getBrain()->getIdea(0) << std::endl;
    std::cout << std::endl;
    
    std::cout << "bim adress after : " << bim->getBrain() << std::endl;
    std::cout << "rex adress after : " << rex->getBrain() << std::endl;
    std::cout << std::endl;
    
    delete rex;
    delete bim;
    return (0);
}




// int main() // main du sujet
// {
//     std::cout << std::endl;
//     const Animal a; // test1  
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << std::endl;
    
//     a.makeSound(); // test1
//     j->makeSound(); 
//     i->makeSound();
//     std::cout << std::endl;
    
//     delete j;
//     delete i;
//     std::cout << std::endl;
    
//     return (0);
// }


// copy a tester
// int main()
// {
//     const int N = 10;
//     Animal* animals[N];

//     for (int i = 0; i < 10; i++)
//     {
//         if (i < 5)
//             animals[i] = new Dog();
//         else
//             animals[i] = new Cat();
//     }
//     for (int i = 0; i < N; i++)
//         animals[i]->makeSound();
//     for (int i = 0; i < N; i++)
//         delete animals[i];

//     return (0);
// }
