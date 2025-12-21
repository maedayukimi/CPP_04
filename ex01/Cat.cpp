/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:00:02 by mawako            #+#    #+#             */
/*   Updated: 2025/12/21 14:43:33 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	std::cout << "Catty\n";
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Swampman Catty\n";
	_brain = new Brain(*other._brain);
}

Cat::~Cat()
{
	std::cout << "*Dash!*\n";
	delete _brain;
}

Cat&		Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	std::cout << "re:re: Catty\n";
	return (*this);
}

const Brain*	Cat::getBrain() const
{
	return (_brain);
}

void		Cat::makeSound() const
{
	std::cout << "Mew~o\n";
}
