/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:22:16 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/17 15:19:11 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unamed")
{
	std::cout << "Animal Default constructor called" << std::endl;
};

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal constructor called" << std::endl;
};

Animal::Animal(const Animal &other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
};

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignement called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
};

std::string	Animal::getType() const
{
	return (type);
};

void	Animal::makeSound() const
{
	std::cout << "Animal Makes sound" << std::endl;
};

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
};