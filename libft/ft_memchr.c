/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:59:24 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/24 20:41:00 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
/*the function scans the initial n byte of the memory area pointed to by s
for the first instance of c. Both c and the bytes of the memory area pointed
to by s are interpreted as unsigned char*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp_s;

	temp_s = (unsigned char *)s;
	while (n > 0)
	{
		if (*temp_s == (unsigned char)c)
			return ((void *)temp_s);
		temp_s++;
		n--;
	}
	return (0);
}
	//return a pointer to the matching byte or NULL

/*int	main(void)
{
	char	*s = "Hola";
	char	c;
	size_t	n;
	char	*a;

	c = 'a';
	n = 8;
	a = ((char *)ft_memchr(s, c, n));
	printf("%s\n", a);
	return (0);
}*/
