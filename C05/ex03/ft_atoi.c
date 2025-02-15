/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:53:12 by nuciftci          #+#    #+#             */
/*   Updated: 2024/07/11 18:19:16 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	b;
	int	a;

	b = 1;
	i = 0;
	a = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			b *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		a = a * 10 + str[i] - 48;
		i++;
	}
	return (b * a);
}
