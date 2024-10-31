/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 21:05:49 by milsanch          #+#    #+#             */
/*   Updated: 2024-10-30 21:05:49 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//allowed functions: malloc, free, write, va_start, va_arg, va_copy, va_end

//The function returns the total number of characters written to the output 
//(excluding the null terminator). If an output error occurs, 
//it returns a negative value

//va_start initialize everything
//va_arg access to the arguments of the variadic function.
//Each time va_arg is called, you move to the next argument.
//va_arg(va_list args, type) //will take arg and type of arg.
//va_end will free the allocated memory
#include "ft_printf.h"

static int	aux_function(va_list args, char *s)
{
	if (*s == 'c' || *s == '%')
		return (ft_putchar(va_args(args, char)));
	else if (*s == 's')
		return (ft_putstr(va_args(args, char *)));
	else if (*s == 'p')
		return (ft_putptr(va_args(args, void *)));
	else if (*s == 'd' || *s == 'i')
		return (ft_putnbr(va_args(args, int)));
	else if (*s == 'u')
		return (ft_putunsigned(va_args(args, unsigned int)));
	else if (*s == 'x' || *s == 'X')
		return (ft_puthex(va_args(args, unsigned int)), *s);
	else if (*s == '\0')
		return (0);
	return (0);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		i;

	if (!s)
		return (-1);
	i = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			i += aux_function(args, s);
		}
		else
		{
			ft_putchar(*s);
			i++;
		}
		s++;
	}
	va_end(args);
	return (i);
}
