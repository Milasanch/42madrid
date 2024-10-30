/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:11:47 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/28 15:28:23 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*removes all characters from the string set from the beginning and end of s1,
until a character not belonging to set is found. The resulting string is
returned with a malloc allocation. NULL if memory allocation failed*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		final;

	if (!s1)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]) != NULL)
		start++;
	final = ft_strlen(s1) - 1;
	while (ft_strrchr(set, s1[final]) != NULL)
		final--;
	return (ft_substr(s1, start, final - start + 1));
}

/*int	main(void)
{
	char const	*s1 = "elelilolalelilo";
	char const	*set = "le";

	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
