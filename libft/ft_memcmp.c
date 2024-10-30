/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:47:12 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/24 20:41:23 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*Compares the first n bytes (each interpreted as unsigned char) for the 
memory areas s1 and s2)
Returns an integer less than, equal to, or greater than zero if the first
n bytes of s1 is found, respectively.*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	temp_s1 = (unsigned char *) s1;
	temp_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if ((temp_s1[i]) != (temp_s2[i]))
			return (temp_s1[i] - temp_s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1 = "tjx";
	char	*s2 = "BlvtCUM";
	size_t	n;

	n = -67;
	printf("Original function result: %i\n", memcmp(s1, s2, n));
	printf("My function result: %i\n", ft_memcmp(s1, s2, n));
	return (0);
}*/
