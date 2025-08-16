/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:26:51 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/16 13:14:52 by nolecler         ###   ########.fr       */
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
    //const Animal a;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    
    //a.makeSound();
    j->makeSound(); 
    i->makeSound();
    std::cout << std::endl;
    
    delete j;
    delete i;
    std::cout << std::endl;
    
    return (0);
}
