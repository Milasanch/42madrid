/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:04:07 by milsanch          #+#    #+#             */
/*   Updated: 2025/03/29 12:59:07 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//send s to the especified fd(file descriptor).
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

// int	main(int argc, char **argv)
// {
// 	char	*s = argv[1];
// 	int		fd;

// 	fd = ft_atoi(argv[2]);
// 	ft_putstr_fd(s, fd);
// 	return (0);
// }
