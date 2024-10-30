/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:19:25 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/01 19:18:06 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*apply the function f to each character of the string passed as argument the
index of each character and its address.*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char	*s = "Hola";

	ft_striteri(s, );
	printf ("%s\n", s);
	return (0);
}*/
