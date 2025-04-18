/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:39:48 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/11 14:02:07 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once 

# include <iostream>
# include <list>

template <typename T>

void iter(T *array, int length, void (*func)(T)){
	for (int i = 0; i < length; i++){
		func(array[i]);
	}
}

template <typename T>

void funct(T element){std::cout << element << ", ";}