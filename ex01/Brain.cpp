/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stkabang <stkabang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 14:31:00 by stkabang          #+#    #+#             */
/*   Updated: 2026/01/17 16:35:58 by stkabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
};

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
};

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
};

void Brain::setIdea(std::string new_idea, int pos)
{
	this->ideas[pos] = new_idea;
};

std::string Brain::getIdea(int pos)
{
	return (this->ideas[pos]);
};

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
};