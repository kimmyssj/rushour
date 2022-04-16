/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:10:28 by yeham             #+#    #+#             */
/*   Updated: 2022/04/16 16:51:50 by yeham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	header_print(int x)
{
	int	i;

	ft_putchar('/');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
		if (i == x - 1)
			ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	body_print(int x)
{
	int	i;

	ft_putchar('*');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar(' ');
		i++;
		if (i == x - 1)
			ft_putchar('*');
	}
	ft_putchar('\n');
}

void	footer_print(int x)
{
	int	i;

	ft_putchar('\\');
	i = 1;
	while (i < x - 1)
	{
		ft_putchar('*');
		i++;
		if (i == x - 1)
			ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0;
	while (j < y)
	{
		if (j == 0)
			header_print(x);
		else if (j != 0 && j != y - 1)
			body_print(x);
		else if (j == y - 1)
			footer_print(x);
		j++;
	}
}
