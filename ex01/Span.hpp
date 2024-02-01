/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:12:59 by phudyka           #+#    #+#             */
/*   Updated: 2024/02/01 16:22:17 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span
{
	private:
		unsigned int		N;
		std::vector<int>	numbers;

	public:
		Span(unsigned int n);
		~Span();
	
    int		shortestSpan() const;
    int		longestSpan() const;
	void	addNumber(int number);
    void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif