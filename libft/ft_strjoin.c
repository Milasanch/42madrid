/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:01:58 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/26 19:11:04 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allocate memory in a new string and return it with concatanation of s1 & s2
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len_total;

	if (!s1 && !s2)
		return (0);
	len_total = (size_t)ft_strlen(s1) + (size_t)ft_strlen(s2) + 1;
	s = (char *)(malloc(len_total));
	if (!s)
		return (0);
	ft_strlcpy(s, s1, len_total);
	ft_strlcat(s, s2, len_total);
	return (s);
}

/*int	main(void)
{
	char const	*s1 = "Be";
	char const	*s2 = " happy";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/
