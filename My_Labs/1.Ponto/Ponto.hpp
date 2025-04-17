/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ponto.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fruan-ba <fruan-ba@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:28:51 by fruan-ba          #+#    #+#             */
/*   Updated: 2025/04/17 17:18:15 by fruan-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Ponto
{
	private:
		int	x;
		int	y;
	public:
		Ponto(int x, int y);
		~Ponto(void);
		Ponto(const Ponto &other);
		Ponto& operator=(const Ponto &other);
		void	set_x(int x);
		void	set_y(int y);
		int	get_x(void) const;
		int	get_y(void) const;
		void	get_result(int a, int b) const;
};
std::ostream& operator<<(std::ostream &out, const Ponto &target);
