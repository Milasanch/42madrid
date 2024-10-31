/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 20:34:19 by milsanch          #+#    #+#             */
/*   Updated: 2024-10-30 20:34:19 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	i;

	if (!n)
		return (0);
	i = 0;
	if (n == 0)
	{
		ft_putchar('0');
		i++;
	}
	else
	{
		if (n / 10 != 0)
			ft_putunsigned(n / 10);
		ft_putchar((n % 10) + '0');
		while (n > 0)
		{
			n /= 10;
			i++;
		}
	}
	return (i);
}
