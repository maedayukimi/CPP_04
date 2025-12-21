/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 03:36:28 by mawako            #+#    #+#             */
/*   Updated: 2025/12/18 15:55:46 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
	protected:
		std::string	_type;
	public:
		Animal(const std::string& type);
		virtual ~Animal();
		const std::string&	getType() const;
		virtual void			makeSound() const;
};

#endif
