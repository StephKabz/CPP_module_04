/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:57:34 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 18:26:48 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "===== ANIMAL CLASS TEST =====" << std::endl;
	std::cout << "\n===== Animal Construtors test =====" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n===== Animal Make sound method =====" << std::endl; 

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // cat sound
	j->makeSound();// dog sound
	meta->makeSound();// default animal sound

	std::cout << "\n===== Animal Destructor test =====" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\n***** ============================== *****" << std::endl;

	std::cout << "\n===== WRONG_ANIMAL CLASS TEST =====" << std::endl;
	std::cout << "\n===== WrongAnimal constructor test =====" << std::endl;

	const WrongAnimal *w_animal = new WrongAnimal();
	const WrongAnimal *w_cat = new WrongCat();

	std::cout << "\n===== WrongAnimal make sound method =====" << std::endl;

	std::cout << w_cat->getType() << " " << std::endl;
	w_cat->makeSound();// wrong cout sound should print wrong animal sound
	w_animal->makeSound();//should print wrong animal sound too
	
	std::cout << "\n===== WrongAnimal destructor test =====" << std::endl;
	delete w_animal;
	delete w_cat;

	return 0;
}
