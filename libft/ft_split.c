/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:47:52 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/09 15:48:15 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*reserve (using malloc) an strings array resulting from splitting the string
s into substrings using the character c as a delimiter. The array must be
terminated with a NULL pointer*/
#include "libft.h"

static size_t	ft_count_strs(char const *s, char c)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (j);
}

static size_t	ft_countchar(char const *s, char c)
{
	size_t	k;

	k = 0;
	while (*s != c && *s != '\0')
	{
		k++;
		s++;
	}
	return (k);
}

static char	**ft_free(const char **a, size_t i)
{
	while (i-- > 0)
	{
		free((void *)a[i]);
	}
	free(a);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	size_t	strs;
	size_t	i;
	size_t	len_str;

	if (!s)
		return (NULL);
	strs = ft_count_strs(s, c);
	a = (char **)ft_calloc(sizeof(char *), (strs + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (i < strs)
	{
		while (*s && *s == c)
			s++;
		len_str = ft_countchar(s, c);
		a[i] = (char *)ft_calloc(sizeof(char), len_str + 1);
		if (!a[i])
			return (ft_free((const char **)a, i));
		ft_strlcpy(a[i], s, len_str + 1);
		i++;
		s = ft_strchr(s, c);
	}
	return (a);
}

/*int	main(void)
{
	char const *s = "Hola Cómo EStas";
	char	c = ' ';
	char **a = ft_split(s,c);
	int		i=0;
	
	while(a[i] != NULL)
	{
		printf("%s\n",a[i]);
		i++;
	}
	return(0);
}*/