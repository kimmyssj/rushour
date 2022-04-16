/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:34:18 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/16 18:04:42 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

void	hori_print1(int x, int y)
{
	int	hori;

	hori = 0;
	while (hori < x)
	{
		if (hori == 0)
			write(1, "A", 1);
		if (hori > 0 && hori < (x - 1))
			write(1, "B", 1);
		if (hori == (x - 1) && hori != 0)
			write(1, "C", 1);
		hori ++;
	}
	if (y != 1)
		write(1, "\n", 1);
}

void	hori_print2(int x)
{
	int	hori;

	hori = 0;
	while (hori < x)
	{
		if (hori == 0 || hori == (x - 1))
			write(1, "B", 1);
		else
			write(1, " ", 1);
		hori ++;
	}
	write(1, "\n", 1);
}

void	hori_print3(int x)
{
	int	hori;

	hori = 0;
	while (hori < x)
	{
		if (hori == 0)
			write(1, "C", 1);
		if (hori > 0 && hori < (x - 1))
			write(1, "B", 1);
		if (hori == (x - 1) && hori != 0)
			write(1, "A", 1);
		hori ++;
	}
}

void	rush(int x, int y)
{
	int	verti;

	verti = 0;
	while (verti < y)
	{
		if (verti == 0)
			hori_print1(x, y);
		else if (verti != 0 && verti != (y - 1))
			hori_print2(x);
		else if (verti == (y - 1))
			hori_print3(x);
		verti ++;
	}
}
