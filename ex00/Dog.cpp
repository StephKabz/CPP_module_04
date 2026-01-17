/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:05:38 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 17:54:31 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
};

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
};

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment called" << std::endl;
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
};

void Dog::makeSound() const
{
	std::cout << "* Woof! *" << std::endl;
};

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
};