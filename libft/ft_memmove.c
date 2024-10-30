/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:51:00 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/25 19:57:42 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//The function copies n bytes from string src to string dst.
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (!dst && !src)
		return (0);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d > s)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
	//returns the original value of dst
/*int	main(void)
{
	char		dst [20];
	const char	*src = "Dont worry, be happy";
	size_t		n; //number of bytes to copy

	n = 19;
	//memmove(dst, src, n);
	ft_memmove(dst, src, n);
	printf("%s\n", dst);
	return (0);
}*/