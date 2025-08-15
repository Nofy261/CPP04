/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:21:15 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/15 18:08:10 by nolecler         ###   ########.fr       */
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
    Dog rex;
    std::cout << std::endl;
    
    Dog leo;
    std::cout << std::endl;

    std::cout << "Leo adress " << leo.getBrain() << std::endl;
    std::cout << "rex adress " << rex.getBrain() << std::endl;
    std::cout << std::endl;

    leo = rex;

    std::cout << "Leo adress " << leo.getBrain() << std::endl;
    std::cout << "rex adress " << rex.getBrain() << std::endl;
    std::cout << std::endl;
    
    return (0);
    
}


// int main() // main du sujet
// {


//     std::cout << std::endl;
//     const Animal a; // test1 fonctionne ici et pas a l exo d apres 
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
//     Animal* animals[N];  //Tableau de pointeurs Animal*

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

