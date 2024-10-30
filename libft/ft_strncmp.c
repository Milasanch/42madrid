/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:02:31 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/26 12:20:15 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
/*Compares the two strings s1 y s2 using unsigned characters.
returns an integer indicating the result of the comparison, as follows:
- 0, if the s1 and s2 are equal
- a negative value if s1 is less than s2
- a positive value if s1 is greater than s2
Compares the character as unsigned char values, so you can handled charactrs
with the 8th bit set (\200)*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*s1 = "test\200";
	const char	*s2 = "test\0";
	size_t		n;

	n = 6;
	printf("%i\n", ft_strncmp(s1, s2, n));
	//printf("%i\n", strncmp(s1, s2, n));
	return (0);
}*/
