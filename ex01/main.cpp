/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 04:13:05 by mawako            #+#    #+#             */
/*   Updated: 2025/12/21 16:49:12 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal* animals[4];

	std::cout << "\n---- CREATE ----\n\n";

	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Cat();
	animals[3] = new Dog();

	std::cout << "\n---- SOUNDS ----\n\n";

	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
	}

	std::cout << "\n---- DELETE ----\n\n";

	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "\n---- BRAINS ----\n\n";

	Dog	dog;
	Dog swampMan = dog;

	std::cout << "ORIGIN: " << dog.getBrain() << std::endl;
	std::cout << "SWAMP!: " << swampMan.getBrain() << std::endl;
}
