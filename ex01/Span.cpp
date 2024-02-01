/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:13:01 by phudyka           #+#    #+#             */
/*   Updated: 2024/02/01 16:31:17 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}

Span::~Span() {}

void	Span::addNumber(int number)
{
    if (numbers.size() >= N)
        throw std::runtime_error("Span is already full");
    numbers.push_back(number);
}

int	Span::shortestSpan() const
{
	int	span;
	int minSpan = std::numeric_limits<int>::max();

    if (numbers.size() <= 1)
        throw std::runtime_error("Not enough elements to calculate span");
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    for (size_t i = 1; i < sortedNumbers.size(); ++i)
	{
        span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
			minSpan = span;
    }
    return (minSpan);
}

int	Span::longestSpan() const
{
    if (numbers.size() <= 1)
	{
        throw std::runtime_error("Not enough elements to calculate span");
    }
    return (*std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end()));
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (std::distance(begin, end) > static_cast<long>(N - numbers.size()))
	{
        throw std::runtime_error("Adding this range exceeds the capacity of the Span");
	}
    numbers.insert(numbers.end(), begin, end);
}