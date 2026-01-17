/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:12:11 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 18:15:28 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
};

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
};

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment called" << std::endl;
	if (this == &other)
		return (*this);
	WrongAnimal::operator=(other);
	return (*this);
};

void WrongCat::makeSound() const
{
	std::cout << "* Meaow! *" << std::endl;
};

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
};