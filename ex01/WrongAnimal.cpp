/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:20:34 by mawako            #+#    #+#             */
/*   Updated: 2025/12/20 05:24:13 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string& type)
	:_type(type)
{
	std::cout << this->_type << " is here!\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "*WRONG ESCAPED*\n";
}

const std::string&	WrongAnimal::getType() const
{
	return (this->_type);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "*WRONG SOUND*\n";
}
