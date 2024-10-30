/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:00:08 by milsanch          #+#    #+#             */
/*   Updated: 2024/09/25 12:45:49 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//write zeroes to a byte string
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*dest;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	s[] = "Be happy";
	size_t	n;

	n = 3;
	printf("%s\n", s);
	//bzero(s+5, n);
	ft_bzero(s + 5, n); //to prove that it's working we add 5 positions. 
	printf("%s\n", s);
	return (0);
}*/