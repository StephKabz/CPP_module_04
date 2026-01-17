/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:09:29 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 18:09:59 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>

class WrongAnimal
{
	protected :
		std::string type;
	public :
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal& operator=(const WrongAnimal &other);
		std::string getType() const;
		void makeSound() const;
		virtual ~WrongAnimal();
};

#endif