/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:21:49 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/01 19:17:33 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*apply the function f to each character of the string s, passing its index as
first argument and the character as second argument. Create a new string with
malloc to recolected the results of the following aplications of f.
Return the string created from the successive applications of f. NULL if memory
allocation failed*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	len;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*int	main(void)
{
	char const	*s = "Hola";
	char		*result;
	result = ft_strmapi(s, f(unsigned int i, char c));
	printf("%s\n", result);
	free(result);
	return (0);
}*/
