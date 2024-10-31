/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-31 00:17:30 by milsanch          #+#    #+#             */
/*   Updated: 2024-10-31 00:17:30 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putcharhex(unsigned int n, char type)
{
	char	*hex;

	hex = NULL;
	if (type == 'x')
		hex = "0123456789abcdef";
	else if (type == 'X')
		hex = "0123456789ABCDEF";
	else
		return (0);
	write(1, &hex[n], 1);
	return (1);
}

int	ft_puthex(unsigned int n, char type)
{
	int	i;

	i = 0;
	if (n == 0)
		return (ft_putcharhex(0, type));
	if (n / 16 != 0)
		ft_puthex(n / 16, type);
	ft_putcharhex(n % 16, type);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}
