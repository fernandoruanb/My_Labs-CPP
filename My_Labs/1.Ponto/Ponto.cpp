/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ponto.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruan-ba <fruan-ba@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:34:28 by fruan-ba          #+#    #+#             */
/*   Updated: 2025/04/17 17:19:02 by fruan-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ponto.hpp"

Ponto::Ponto(int x, int y) : x(x), y(y) {}

Ponto::~Ponto(void) {}

Ponto::Ponto(const Ponto &other)
{
	this->x = other.get_x();
	this->y = other.get_y();
}

Ponto& Ponto::operator=(const Ponto &other)
{
	if (this != &other)
	{
		this->x = other.get_x();
		this->y = other.get_y();
	}
	return (*this);
}

void	Ponto::set_x(int x)
{
	this->x = x;
}

void	Ponto::set_y(int y)
{
	this->y = y;
}

int	Ponto::get_x(void) const
{
	return (x);
}

int	Ponto::get_y(void) const
{
	return (y);
}

void	Ponto::get_result(int a, int b) const
{
	std::cout << "Distance: " << hypot(x - a, y - b) << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Ponto &other)
{
	out << "The points: (" << other.get_x() << "," << other.get_y() << ")" << std::endl;
	return (out);
}
