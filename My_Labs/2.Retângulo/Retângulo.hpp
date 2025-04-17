/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Retângulo.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruan-ba <fruan-ba@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:52:34 by fruan-ba          #+#    #+#             */
/*   Updated: 2025/04/17 18:41:59 by fruan-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RETÂNGULO_HPP
# define RETÂNGULO_HPP

# include <iostream>
# include <cmath>

class Retângulo
{
	private:
		double largura;
		double altura;
	public:
		Retângulo(void);
		~Retângulo(void);
		Retângulo(double largura, double altura);
		Retângulo(const Retângulo &other);
		Retângulo& operator=(const Retângulo &other);
		double get_area(void) const;
		double get_largura(void) const;
		double get_altura(void) const;
		void set_largura(double largura) const;
		void set_altura(double altura) const;
};
std::ostream& operator<<(std::ostream &out, const Retângulo &other);

#endif /* RETÂNGULO_HPP */
