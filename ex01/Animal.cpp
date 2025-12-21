/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 03:41:06 by mawako            #+#    #+#             */
/*   Updated: 2025/12/18 15:56:16 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string& type)
	:_type(type)
{
	std::cout << _type << " Here!\n";
}

Animal::~Animal()
{
	std::cout << this->_type << " Escaped!\n";
}

const std::string&	Animal::getType() const
{
	return (this->_type);
}

void			Animal::makeSound() const
{
	std::cout << "*Censored*\n";
}
