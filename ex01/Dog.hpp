/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:11:33 by mawako            #+#    #+#             */
/*   Updated: 2025/12/21 14:43:09 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class	Dog : public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog();
		Dog(const Dog& other);
		~Dog();

		Dog&		operator=(const Dog& other);
		const Brain*	getBrain() const;
		void		makeSound() const;
};

#endif
