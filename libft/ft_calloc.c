/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:15:45 by milsanch          #+#    #+#             */
/*   Updated: 2025/04/14 13:54:21 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function allocates memory for an array of nmemb elements of size bytes
each and returns a pointer to the allocated memory. The memory is set to zero.
If nmemb or size  is 0, then retuns either NULL, or a unique pointer value 
that can later be successfully passed to free(). If the multiplication of
nmemb and size would result in integer overflow, the returns an error*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*ptr;

	if (size != 0 && nmemb >= SIZE_MAX / size)
		return (0);
	total = (nmemb * size);
	ptr = (char *)malloc(total);
	if (!ptr)
		return (NULL);
	else
	{
		ft_bzero(ptr, total);
		return (ptr);
	}
}

/*int	main(void)
{
	size_t	nmemb;
	size_t	size;
	char	*ptr;
	char	*ptr1;

	nmemb = 4;
	size = 2;
	ptr = (char *)ft_calloc(nmemb, size);
	ptr1 = (char *)calloc(nmemb, size);
	printf("Original function: %s\n", ptr1);
	printf("My function: %s\n", ptr);
	free (ptr);
	free (ptr1);
	return (0);
}*/
