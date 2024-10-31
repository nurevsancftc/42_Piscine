/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabaci <sabaci@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:35:17 by sabaci            #+#    #+#             */
/*   Updated: 2024/07/07 14:35:17 by sabaci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	func(int x, int y, int a, int b)
{
	if ((a == 1 && b == 1) || (a == x && b == y && a != 1 && b != 1))
		ft_putchar('A');
	else if ((a == x && b == 1) || (a == 1 && b == y))
		ft_putchar('C');
	else if (a == x || a == 1 || b == y || b == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	if (x > 0 && y > 0)
	{
		b = 1;
		while (b <= y)
		{
			a = 1;
			while (a <= x)
			{
				func(x, y, a, b);
				a++;
			}
			ft_putchar('\n');
			b++;
		}
	}
	else
	{
		write(1, "error", 5);
	}
}
