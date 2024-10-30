/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:10:34 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/25 21:32:38 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//The function returns a pointer to the last occurence of the character c in s
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (*s && i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (c == '\0')
		return ((char *) s);
	return (0);
}
/*return NULL if the character is not found. The terminating null byte is 
considered part of the string, so that if c is specified as '\0', these
functions return a pointer to the terminator*/

/*int	main(void)
{
	const char	*s = "Harry Potter";
	int	c;

	c = 'r';
	ft_strrchr(s, c);
	printf("%c\n", c + 1);
	return (0);
}*/
