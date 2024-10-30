/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:04:07 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/01 18:23:24 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//send s to the especified fd(file descriptor).
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	*s = "Smile";
	int		fd;

	fd = 1;
	ft_putstr_fd(s, fd);
	return (0);
}*/
