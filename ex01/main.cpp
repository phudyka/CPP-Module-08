/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:20:41 by phudyka           #+#    #+#             */
/*   Updated: 2024/02/01 16:31:25 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
	{
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        try
		{
            sp.addNumber(22);
        }
		catch (const std::exception &e)
		{
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        Span sp2 = Span(1);
        try
		{
            sp2.shortestSpan(); 
        }
		catch (const std::exception &e)
		{
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        int arr[] = {2, 5, 8, 13};
        std::vector<int> additionalNumbers(arr, arr + sizeof(arr) / sizeof(arr[0]));
        sp2.addRange(additionalNumbers.begin(), additionalNumbers.end());

        std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;

        Span sp3 = Span(3);
        try
		{
            sp3.addRange(additionalNumbers.begin(), additionalNumbers.end());
		}
		catch (const std::exception &e)
		{
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
	catch (const std::exception &e)
	{
        std::cerr << "Unhandled exception caught: " << e.what() << std::endl;
    }
    return (0);
}