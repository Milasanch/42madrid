/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-31 02:52:38 by milsanch          #+#    #+#             */
/*   Updated: 2024-10-31 02:52:38 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexptr(unsigned long long n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n / 16 != 0)
		ft_puthexptr(n / 16);
	write(1, &hex[n % 16], 1);
	while (n > 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	address;
	int					i;

	if (!ptr)
		return (0);
	address = (unsigned long long)ptr;
	write(1, "0x", 2);
	i = 2;
	i += ft_puthexptr(address);
	return (i);
}
