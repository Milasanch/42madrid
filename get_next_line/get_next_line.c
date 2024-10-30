/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-20 17:05:59 by milsanch          #+#    #+#             */
/*   Updated: 2024-10-20 17:05:59 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

static char	*clean_nextline(char *next_line)
{
	int		i;
	int		j;
	int		k;
	char	*rest;

	rest = NULL;
	i = 0;
	while (next_line [i] != '\n' && next_line [i] != '\0' )
		i++;
	if (next_line [i] == '\n')
		i++;
	j = 0;
	k = i;
	while (next_line[k++] != '\0')
		j++;
	if (j > 0)
		rest = (ft_calloc(sizeof(char), j + 1));
	if (!rest)
		return (free(next_line), NULL);
	j = 0;
	while (next_line [i] != '\0')
		rest [j++] = next_line[i++];
	if (!rest)
		return (free(next_line), next_line = NULL, NULL);
	return (free(next_line), next_line = NULL, rest);
}

static char	*final_line(char *next_line)
{
	int		i;
	char	*f_line;

	i = 0;
	while (next_line[i] != '\n' && next_line [i])
		i++;
	if (next_line[i] == '\n')
		f_line = ft_calloc(sizeof(char), i + 2);
	else
		f_line = ft_calloc(sizeof(char), i + 1);
	if (!f_line)
		return (NULL);
	i = 0;
	while (next_line[i] != '\n' && next_line [i] != '\0')
	{
		f_line[i] = next_line[i];
		i++;
	}
	if (next_line[i] == '\n')
		f_line[i] = '\n';
	return (f_line);
}

static char	*read_line(int fd, char *buff, char *next_line)
{
	ssize_t	bytes_read;
	char	*temp_nl;

	bytes_read = 1;
	while (bytes_read > 0 && ft_strchr(buff, '\n') == NULL)
	{
		bytes_read = read(fd, buff, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(next_line), NULL);
		else if (bytes_read == 0)
			break ;
		buff[bytes_read] = '\0';
		if (!next_line)
			next_line = ft_calloc(sizeof(char), 1);
		if (!next_line)
			return (NULL);
		temp_nl = next_line;
		next_line = ft_strjoin(temp_nl, buff);
		free(temp_nl);
		if (!next_line)
			return (NULL);
		temp_nl = NULL;
	}
	return (next_line);
}

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*buff;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buff = (char *)ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buff)
		return (free(next_line), next_line = NULL, NULL);
	next_line = read_line(fd, buff, next_line);
	free(buff);
	if (!next_line)
		return (NULL);
	line = final_line(next_line);
	if (!line)
		return (NULL);
	next_line = clean_nextline(next_line);
	return (line);
}

/*int main(void)
{
	int fd;
	char *line;

	fd = open("1char.txt", O_RDONLY);
	line = NULL;
	if (fd == -1)
	{
		printf("Error opening file");
		return (1);
	}

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}*/
