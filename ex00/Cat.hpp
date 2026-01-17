/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:55:57 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 17:56:25 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		void makeSound() const;
		virtual ~Cat();
};

#endif