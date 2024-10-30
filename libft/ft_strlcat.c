/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:22:16 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/28 15:26:00 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*concatenate strings respectively. Take the full size of the buffer and
guarantee to NUL-terminate the result as long as there is at least one byte
free in  dst)*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = 0;
	len_s = 0;
	while (dst[len_d] != '\0' && len_d < size)
		len_d++;
	while (src[len_s] != '\0')
		len_s++;
	if (size <= len_d)
		return (len_s + size);
	i = 0;
	while (src[i] != '\0' && (len_d + i + 1) < size)
	{
		dst[len_d + i] = src [i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
	//return the total length of the string they tried to create

/*int	main(void)
{
	char		dst[20] = "Dont worry";
	const char	src[] = "be happy";
	size_t		size;

	size = sizeof(dst);
	printf("%zu\n", ft_strlcat(dst, src, size));
	return (0);
}*/
