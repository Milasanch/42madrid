/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:53:28 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/26 14:23:08 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function returns a pointer to a new string wich is a duplicate of the 
string s. Memory for the new string is obtained with malloc and can be freed
with free. Returns a pointer to the duplicated string. It returns NULL if 
insufficient memory was available.*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	size;

	size = ((size_t)ft_strlen((char *)s) + 1);
	dst = (char *)malloc (size);
	if (!dst)
		return (0);
	ft_strlcpy(dst, s, size);
	return (dst);
}

/*int	main(void)
{
	const char	*s = "Hell HOla CIaoo";
	char		*dst;

	dst = ft_strdup(s);
	printf("%s\n", dst);
	return (0);
}*/
