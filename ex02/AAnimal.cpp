/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:22:16 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/17 15:19:11 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Unamed")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
};

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
};

AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
};

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal copy assignement called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
};

std::string	AAnimal::getType() const
{
	return (type);
};

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal Makes sound" << std::endl;
};

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
};