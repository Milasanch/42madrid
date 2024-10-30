/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:59:13 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/24 20:42:09 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function writes len bytes of value c (converted to an unsigned char)
//to the string s
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;

	dst = s;
	i = 0;
	while (i < n)
	{
		dst[i] = (unsigned char)c;
		i++;
	}
	return (dst);
}
	//returns its first argument
/* int	main(void)
{
	char	s[] = "A better world";
	int		c;
	size_t	n;

	c = '-';
	n = 8;
	printf("%s\n", s);
	ft_memset(s, c, n);
	printf("%s\n", s);
	return (0);
}*/
