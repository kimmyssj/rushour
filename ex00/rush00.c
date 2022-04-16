/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 19:40:19 by yeham             #+#    #+#             */
/*   Updated: 2022/04/16 16:39:45 by yeham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			if ((i != 0 && i != x - 1) && (j != 0 && j != y - 1))
				ft_putchar(' ');
			else if ((i == 0 || i == x - 1) && j != 0 && j != y - 1)
				ft_putchar('-');
			else if (i != 0 && i != x - 1 && (j == 0 || j == y - 1))
				ft_putchar('|');
			else
				ft_putchar('o');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
