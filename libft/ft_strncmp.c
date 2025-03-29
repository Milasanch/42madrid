/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:02:31 by milsanch          #+#    #+#             */
/*   Updated: 2025/03/29 12:57:06 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
/*Compares the two strings s1 y s2 using unsigned characters.
returns an integer indicating the result of the comparison, as follows:
- 0, if the s1 and s2 are equal
- a negative value if s1 is less than s2
- a positive value if s1 is greater than s2
Compares the character as unsigned char values, so you can handled characters
with the 8th bit set (\200)*/
#include "libft.h"
//#include "string.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL || n <= 0)
		return (0);
	while (*s1 == *s2 && (*s1 != '\0' || *s2 != '\0') && n > 0)
	{
		n--;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int	main(int argc, char **argv)
// {
// 	const char	*s1 = argv[1];
// 	const char	*s2 = argv[2];
// 	size_t		n;

// 	n = (size_t)argv[3];
// 	printf("%i\n", ft_strncmp(s1, s2, n));
// 	//printf("%i\n", strncmp(s1, s2, n));
// 	return (0);
// }