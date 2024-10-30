/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:46:16 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/09 16:12:12 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strlcpy copy strings. Take the full size of dst buffer
and guarantee NUL-termination if there is room. 
Only operate on true ''C'' strings, src must be NUL-terminated.*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len_d)
{
	size_t	len_s;
	size_t	i;

	i = 0;
	len_s = 0;
	while (src[len_s] != '\0')
		len_s++;
	if (len_d > 0)
	{
		i = 0;
		while (i < len_d - 1 && src [i] != '\0')
		{
			dst[i] = src [i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_s);
}
	//returns the length of src

/*int	main(void)
{
	char dst[10];
	const char *src = "Be happy";
	size_t len_d;

	len_d = sizeof(dst);
	//strlcpy(dst, src, size);
	//printf("%i\n", strlcpy(dst, src, size));
	ft_strlcpy(dst, src, len_d);
	printf("%zu\n", ft_strlcpy(dst, src, len_d));
	return (0);
}*/ 