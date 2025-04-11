/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:00:56 by inowak--          #+#    #+#             */
/*   Updated: 2025/04/11 14:08:33 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"
# include "colors.hpp"

int main( void ) {

	std::cout << UNDERLINE << "First test: " << RESET << std::endl;
	int array1[10] = {0, 1, 2, 3, 4, 5, 6 ,7, 8, 9};
	iter(array1, 10, funct);
	std::cout << std::endl;

	std::cout << std::endl;

	std::cout << UNDERLINE << "Second test: " << RESET << std::endl;
	std::string array2[10] = {"hello", "corrector", "I", "hope", "you", "pass", "a", "good", "day", ":)" };
	iter(array2, 10, funct);
	std::cout << std::endl;
	
	std::cout << std::endl;
	
	std::cout << UNDERLINE << "Third test: " << RESET << std::endl;
	double array3[10] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 ,7.7, 8.8, 9.9};
	iter(array3, 10, funct);
	std::cout << std::endl;
}
