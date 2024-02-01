/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:07:59 by phudyka           #+#    #+#             */
/*   Updated: 2024/02/01 15:20:23 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> myVector(5, 0);

	try
    {
        std::vector<int>::iterator result = easyfind(myVector, 0);
        std::cout << "Value found at position: " << std::distance(myVector.begin(), result) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    try
    {
        std::vector<int>::iterator result = easyfind(myVector, 10);
        std::cout << "Value found at position: " << std::distance(myVector.begin(), result) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return (0);
}
