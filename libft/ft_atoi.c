/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:36:14 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/25 12:48:40 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function converts te initial portion of the string pointed to by 
nptr to int.
It returns the converted value or 0 on error*/
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr ++;
	}
	while ((*nptr >= 48 && *nptr <= 57))
	{
		num = ((num * 10) + (*nptr - '0'));
		nptr++;
	}
	return (sign * num);
}

/*int	main(void)
{
	char	*nptr = "        -+42";

	printf("%d\n", ft_atoi(nptr));
	printf("%d\n", atoi(nptr));
	return (0);
}*/
