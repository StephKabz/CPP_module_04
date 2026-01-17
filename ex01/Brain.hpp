/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:31:05 by stkabang          #+#    #+#             */
/*   Updated: 2026/01/17 16:34:50 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <string>
#include <fstream>

class Brain
{
	private :
		std::string ideas[100];
	public :
		Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		void setIdea(std::string new_idea, int pos);
		std::string getIdea(int pos);
		~Brain();
};

#endif

