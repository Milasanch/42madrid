/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:25:35 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/07 18:47:20 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*use malloc to generate a string that represent the n value. Negative numbers
have to be managed*/
#include "libft.h"

static int	ft_len(int nb)
{
	int	num;
	int	len;

	num = nb;
	len = 0;
	if (nb <= 0)
	{
		num = -nb;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*ft_str(int nb, char *s, int len)
{
	int	dividend;
	int	i;

	s[len] = '\0';
	i = 0;
	if (nb < 0)
	{
		s[i] = '-';
		nb = -nb;
		len--;
		i++;
	}
	dividend = 1;
	while (len-- > 1)
		dividend *= 10;
	while (dividend != 0)
	{
		s[i] = nb / dividend + '0';
		nb %= dividend;
		dividend /= 10;
		i++;
	}
	return (s);
}

char	*ft_itoa(int nb)
{
	char	*s;
	int		len;

	len = ft_len(nb);
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	s = (char *)(malloc(sizeof(char) * (size_t)len + 1));
	if (!s)
		return (NULL);
	if (nb != 0)
		s = ft_str(nb, s, len);
	return (s);
}

/*int	main(void)
{
	int		n;
	char	*result;

	n = 42;
	result = ft_itoa(n);
	printf("%s\n", result);
	return (0);
}*/
