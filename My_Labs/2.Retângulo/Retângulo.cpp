/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Retângulo.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruan-ba <fruan-ba@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:40:50 by fruan-ba          #+#    #+#             */
/*   Updated: 2025/04/17 18:51:44 by fruan-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Retângulo.hpp"

Retângulo::Retângulo(void) : largura(0), altura(0) {}

Retângulo::Retângulo(double largura, double altura) : largura(largura), altura(altura) {}

Retângulo::~Retângulo(void) {}

Retângulo::Retângulo(const Retângulo &other)
{
	this->largura = other.get_largura();
	this->altura = other.get_altura();
}

Retângulo& Retângulo::operator=(const Retângulo &other)
{
	if (this != &other)
	{
		this->largura = other.get_largura();
		this->altura = other.get_altura();
	}
	return (*this);
}

double	Retângulo::get_area(void) const
{
	return (this->largura * this->altura);
}

std::ostream operator<<(std::ostream &out, const Retângulo &other)
{
	out << "largura: " << other.largura() << " altura: " << other.altura() << std::endl;
	return (out);
}
