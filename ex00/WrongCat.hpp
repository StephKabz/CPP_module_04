/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 18:11:28 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/16 18:13:17 by kingstephan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat& operator=(const WrongCat &other);
		void makeSound() const;
		virtual ~WrongCat();
};

#endif