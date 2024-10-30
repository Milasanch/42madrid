/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:39:18 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/08 22:24:30 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_len(long n)
{
	long	num;
	long	counter;
	long	dividend;
	long	i;

	num = n;
	counter = 0;
	dividend = 1;
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	i = 1;
	while (i < counter)
	{
		dividend *= 10;
		counter --;
	}
	return (dividend);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	dividend;
	long	quotient;
	char	quotient_c;
	long	n2;

	dividend = 0;
	n2 = (long) n;
	if (n2 < 0)
	{
		write(fd, "-", 1);
		n2 *= -1;
	}
	if (n2 >= 0)
		dividend = ft_len(n2);
	while (dividend != 0)
	{
		quotient = n2 / dividend;
		n2 = n2 % dividend;
		quotient_c = quotient + '0';
		write(fd, &quotient_c, 1);
		dividend = dividend / 10;
	}
}
// int	main(void)
// {
// 	int	n;
// 	int	fd;

// 	n = 0;
// 	fd = 1;
// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }