/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:29:20 by milsanch          #+#    #+#             */
/*   Updated: 2024/10/01 18:38:49 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//send the s to fd(file descriptor) followed by a newline
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

/*int	main(void)
{
	char	*s;
	int		fd;

	s = "Smile";
	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}*/
