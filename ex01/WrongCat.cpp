/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:28:30 by mawako            #+#    #+#             */
/*   Updated: 2025/12/20 05:00:05 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WRONGCAT HERE\n";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Escaped!\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "BYOW\n";
}
