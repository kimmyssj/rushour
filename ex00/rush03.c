/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiham <jiham@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 22:07:00 by jiham             #+#    #+#             */
/*   Updated: 2022/04/16 18:22:47 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((r == 1 && c == 1) || (r == y && c == 1))
				ft_putchar('A');
			else if ((r == y && c == x) || (r == 1 && c == x))
				ft_putchar('C');
			else if ((r > 1 && r < y) && (c > 1 && c < x))
				ft_putchar(' ');
			else
				ft_putchar('B');
		c++;
		}
		r++;
		write (1, "\n", 1);
	}
}
