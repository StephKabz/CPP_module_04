/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:05:38 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/17 19:50:05 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	brain = new Brain();
};

Dog::Dog(const Dog &other) : AAnimal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
	*this->brain = *other.brain;
};

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment called" << std::endl;
	if (this == &other)
		return (*this);
	AAnimal::operator=(other);
	delete brain;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return (*this);
};

void Dog::makeSound() const
{
	std::cout << "* Woof! *" << std::endl;
};

void Dog::setIdea(std::string new_idea, int pos)
{
	this->brain->setIdea(new_idea, pos);
};

std::string Dog::getIdea(int pos)
{
	return (this->brain->getIdea(pos));
};

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
};