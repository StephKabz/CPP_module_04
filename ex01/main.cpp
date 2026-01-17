/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:57:34 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/17 16:46:58 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "===== BRAIN CLASS TEST =====" << std::endl;
	std::cout << "\n===== Animal array construtions =====" << std::endl;

	Animal *animals[4];
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();
	
	std::cout << "\n===== Animal array destructions =====" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];
	std::cout << "\n===== DEEP COPY TEST =====" << std::endl;
	std::cout << "\n===== create and set an idea =====" << std::endl;
	Dog dog1;
	Dog dog2;
	dog1.setIdea("Dog must eat shoes!", 0);
	std::cout << dog1.getIdea(0) << std::endl;
	dog2 = dog1;
	dog2.setIdea("Dog must eat chicken!", 0);
	std::cout << dog2.getIdea(0) << std::endl;
	std::cout << dog1.getIdea(0) << std::endl;

	std::cout << "\n===== end of scope =====" << std::endl;
	return 0;
}
