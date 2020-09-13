/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atron <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:17:14 by atron             #+#    #+#             */
/*   Updated: 2020/09/13 16:17:16 by atron            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	checkcorner(int *x, int *y, int *xindex, int *yindex)
{
	if (*yindex == 0)
	{
		if (*xindex == 0)
			ft_putchar('/');
		else if (*xindex == *x - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (*yindex == *y - 1)
	{
		if (*xindex == 0)
			ft_putchar('\\');
		else if (*xindex == *x - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (*xindex == 0 || *xindex == *x - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int xindex;
	int yindex;

	xindex = 0;
	yindex = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (yindex < y)
	{
		while (xindex < x)
		{
			checkcorner(&x, &y, &xindex, &yindex);
			++xindex;
		}
		ft_putchar('\n');
		xindex = 0;
		++yindex;
	}
}
