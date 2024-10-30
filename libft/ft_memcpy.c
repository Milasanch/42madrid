/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:42:40 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/26 14:48:33 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//The function copies n byte from memory area src to memory area dst.
//If dst and src overlap, behavior is undefined.
//Applications in wich dst and src might overlap should use memmove(3) instead.
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (0);
	i = 0;
	d = dst;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
//returns the original value of dst
/*int	main(void)
{
	char	src[] = "hola";
	char	dst[20];
	size_t	n;

	n = 5;
	//memcpy(dst, src, n);
	//printf("%s\n", dst);
	ft_memcpy(dst, src, n);
	printf("%s\n", dst);
	return (0);
}*/