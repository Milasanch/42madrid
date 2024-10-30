/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:22:58 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/09 16:59:35 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*allocate memory with malloc and return substr of the s. The substr starts
from index start and has a max length. Return NULL if memory allocation faild*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;
	size_t			s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (start > (unsigned int)s_len)
		len = 0;
	substr = (char *)(malloc((len + 1) * sizeof(char)));
	if (!substr)
		return (NULL);
	i = 0;
	while (start < s_len && s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
//return substr. NULL si falla la reserva de memoria

/*int	main(void)
{
	char const		*s;
	unsigned int	start;
	size_t			len;
	char			*substr;

	s = "Hola";
	start = UINT32_MAX;
	len = 8;
	substr = ft_substr(s, start, len);
	printf("%s\n", substr);
	free(substr);
	return (0);
}*/
