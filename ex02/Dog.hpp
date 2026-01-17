/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:01:10 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/17 19:48:48 by stkabang         ###   ########.fr       */
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
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private :
		Brain *brain;
	public :
		Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		void makeSound() const;
		void setIdea(std::string new_idea, int pos);
		std::string getIdea(int pos);
		virtual ~Dog();
};

#endif