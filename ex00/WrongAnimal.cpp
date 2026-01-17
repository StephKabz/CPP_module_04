/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:10:06 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 18:14:41 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unamed")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignement called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
};

std::string	WrongAnimal::getType() const
{
	return (type);
};

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Makes sound" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
};