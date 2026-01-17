/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 17:55:57 by kingstephan       #+#    #+#             */
/*   Updated: 2026/01/17 19:49:13 by stkabang         ###   ########.fr       */
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
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private :
		Brain *brain;
	public :
		Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		void makeSound() const;
		void setIdea(std::string new_idea, int pos);
		std::string getIdea(int pos);
		virtual ~Cat();
};

#endif