/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 04:13:05 by mawako            #+#    #+#             */
/*   Updated: 2025/12/21 16:57:07 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << "\n---- CREATE ----\n\n";

	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const WrongAnimal* god = new WrongCat();

	std::cout << "\n---- TYPES  ----\n\n";

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << god->getType() << std::endl;

	std::cout << "\n---- SOUNDS ----\n\n";

	cat->makeSound();
	dog->makeSound();
	god->makeSound();

	std::cout << "\n---- DELETE ----\n\n";

	delete cat;
	delete dog;
	delete god;
}
