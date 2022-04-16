/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:34:18 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/16 19:44:07 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

void	hori_print1(int x)
{
	int	hori;

	hori = 0;
	while (hori < x)
	{
		if (hori == 0)
			ft_putchar('A');
		if (hori > 0 && hori < (x - 1))
			ft_putchar('B');
		if (hori == (x - 1) && hori != 0)
			ft_putchar('C');
		hori ++;
	}
	ft_putchar('\n');
}

void	hori_print2(int x)
{
	int	hori;

	hori = 0;
	while (hori < x)
	{
		if (hori == 0 || hori == (x - 1))
			ft_putchar('B');
		else
			ft_putchar(' ');
		hori ++;
	}
	ft_putchar('\n');
}

void	hori_print3(int x)
{
	int	hori;

	hori = 0;
	while (hori < x)
	{
		if (hori == 0)
			ft_putchar('C');
		if (hori > 0 && hori < (x - 1))
			ft_putchar('B');
		if (hori == (x - 1) && hori != 0)
			ft_putchar('A');
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
			hori_print1(x);
		else if (verti != 0 && verti != (y - 1))
			hori_print2(x);
		else if (verti == (y - 1))
			hori_print3(x);
		verti ++;
	}
}
