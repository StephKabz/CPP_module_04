/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:56:40 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/17 19:49:34 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	brain = new Brain();
};

Cat::Cat(const Cat &other) : AAnimal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain();
	*this->brain = *other.brain;
};

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment called" << std::endl;
	if (this == &other)
		return (*this);
	AAnimal::operator=(other);
	delete brain;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return (*this);
};

void Cat::makeSound() const
{
	std::cout << "* Meaow! *" << std::endl;
};

void Cat::setIdea(std::string new_idea, int pos)
{
	this->brain->setIdea(new_idea, pos);
};

std::string Cat::getIdea(int pos)
{
	return (this->brain->getIdea(pos));
};

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
};