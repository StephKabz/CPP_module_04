/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 17:17:29 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 17:18:16 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>

class Animal
{
	protected :
		std::string type;
	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		std::string getType() const;
		virtual void makeSound() const;
		virtual ~Animal();
};

#endif