/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuciftci <nuciftci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:31:53 by nuciftci          #+#    #+#             */
/*   Updated: 2024/07/08 13:31:31 by nuciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	mod;

	if (b != 0)
	{
		temp = *a / *b;
		mod = *a % *b;
		*a = temp;
		*b = mod;
	}
}
