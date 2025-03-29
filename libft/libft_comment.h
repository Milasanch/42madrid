/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_comment.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:00:55 by milsanch          #+#    #+#             */
/*   Updated: 2025/03/29 13:13:47 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//charge two instructions at the beginning and the end
#ifndef LIBFT_COMMENT_H
# define LIBFT_COMMENT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}			t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **list, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//check the character type
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
//count chain length
size_t	ft_strlen(const char *str);
//writes n bytes of value c (converted to an unsigned char) to the string s
void	*ft_memset(void *s, int c, size_t n);
//writes zeroes to a byte string
void	ft_bzero(void *s, size_t n);
//the functions copies n bytes from string src to string dst
//use memmove if the memory areas do overlap 
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
//copy and concatenate strings respectively
//take the full size of the buffer and guarantee to NUL-terminate
size_t	ft_strlcpy(char *dst, const char *src, size_t len_d);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
//convert lowercase letters to uppercase, and vice versa
int		ft_toupper(int c);
int		ft_tolower(int c);
//returns a pointer to the first/last occurrence of the character c in s
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
//compares the first n bytes of s1 and s2
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//scans the initial n byte of the memory area pointed to by s for the first
//instance of c
void	*ft_memchr(const void *s, int c, size_t n);
//compares first n bytes of the memory areas s1 and s2
int		ft_memcmp(const void *s1, const void *s2, size_t n);
//function locates the firstoccurence of the null-terminated string little in
//the string big, where not more than len characters are searched
char	*ft_strnstr(const char *big, const char *little, size_t len);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int		ft_atoi(const char *nptr);
//allocates memory for an array of nmemb elements of size bytes each and
//returns a pointer to the allocated memory. The memory is set to zero
void	*ft_calloc(size_t nmemb, size_t size);
//returns a pointer to a new string wich is a duplicate of the string s
char	*ft_strdup(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len);
//allocate memory in a new string and return it with concatanation of s1 & s2

char	*ft_strjoin(char const *s1, char const *s2);
/*removes all characters from the string set from the beginning and end of s1,
until a character not belonging to set is found. The resulting string is
returned with a malloc allocation.*/
char	*ft_strtrim(char const *s1, char const *set);
/*reserve (using malloc) an strings array resulting from splitting the string
s into substrings using the character c as a delimiter. The array must be
terminated with a NULL pointer*/
char	**ft_split(char const *s, char c);
/*use malloc to generate a string that represent the n value. Negative numbers
have to be managed*/
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif