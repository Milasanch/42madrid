/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:57:19 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/26 13:02:43 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
/*The function locates the first occurrence of the null-terminated string
little in the string big, where not more than len characters are searched
If little is an empty string, big is returned;
If little occurs nowhere in big, NULL is returned;
Otherwise a pointer to the first character of the first occurence of little
is returned*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*big = "lorem ipsum dolor sit amet";
	char	*little = "lorem";
	size_t	len;

	len = 15;
	printf("%s\n", ft_strnstr(big, little, len));
	return (0);
}*/
