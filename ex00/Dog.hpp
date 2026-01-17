/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:01:10 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 17:49:32 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		void makeSound() const;
		virtual ~Dog();
};

#endif