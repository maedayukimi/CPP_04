/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:00:11 by mawako            #+#    #+#             */
/*   Updated: 2025/12/21 14:43:49 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class	Cat : public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat();
		Cat(const Cat& other);
		~Cat();

		Cat&		operator=(const Cat& other);
		const Brain*	getBrain() const;
		void		makeSound() const;
};

#endif
