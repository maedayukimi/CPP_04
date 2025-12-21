/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:20:24 by mawako            #+#    #+#             */
/*   Updated: 2025/12/21 14:43:00 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	std::cout << "Doge\n";
	_brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Swampman Doge\n";
	_brain = new Brain(*other._brain);
}

Dog::~Dog()
{
	std::cout << "*Whoosh!*\n";
	delete _brain;
}

Dog&		Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << "re:re: Doge\n";
	return (*this);
}

const Brain*	Dog::getBrain() const
{
	return (_brain);
}

void		Dog::makeSound() const
{
	std::cout << "Bow-Wow!\n";
}
