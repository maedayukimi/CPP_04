/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 01:47:16 by mawako            #+#    #+#             */
/*   Updated: 2025/12/21 16:16:27 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created!\n";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Swampman's Brain created!\n";
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Brain Transformed!\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destroyed!\n";
}
