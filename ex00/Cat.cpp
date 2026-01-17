/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:56:40 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 17:57:11 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
};

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
};

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment called" << std::endl;
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
};

void Cat::makeSound() const
{
	std::cout << "* Meaow! *" << std::endl;
};

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
};