/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 14:00:11 by mawako            #+#    #+#             */
/*   Updated: 2025/12/19 14:08:18 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class	Cat : public Animal
{
	public:
		Cat();
		~Cat();
		
		void	makeSound() const;
};

#endif
