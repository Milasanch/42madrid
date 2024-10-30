/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:39:52 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/25 20:53:09 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//returns a pointer to the first occurence of the character c in the string s
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

/*int	main(void)
{
	const char	*s = "Harry";
	int		c = '\0';

	ft_strchr(s, c);
	printf("%c\n", c);
	return (0);
}*/
