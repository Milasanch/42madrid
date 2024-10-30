/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-29 18:42:44 by milsanch          #+#    #+#             */
/*   Updated: 2024-10-29 18:42:44 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len_total;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	len_total = ft_strlen(s1) + ft_strlen(s2) + 1;
	s = (char *)(malloc(len_total));
	if (!s)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1) && s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	ft_strlcat(s, s2, len_total);
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*ptr;
	size_t	i;

	if (size != 0 && nmemb >= SIZE_MAX / size)
		return (0);
	total = (nmemb * size);
	ptr = (char *)malloc(total);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	size_t			s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= (unsigned int)s_len)
		len = 0;
	else if (start + len > s_len)
		len = s_len - start;
	substr = (char *)(malloc((len + 1) * sizeof(char)));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
