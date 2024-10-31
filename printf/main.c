/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainpruebas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milsanch <milsanch@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-30 17:27:06 by milsanch          #+#    #+#             */
/*   Updated: 2024-10-30 17:27:06 by milsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	void *ptr = "pointer";
	
	//testing individual functions
	printf(" %i\n", ft_putchar('%'));
	printf("%c\n", '%');
	printf(" %i\n", ft_putstr("hola"));
	printf("%s\n", "hola");
	printf(" %i\n", ft_putnbr(9385745));
	printf("%i\n", 9385745);
	printf("%d\n", 9385745);
	printf(" %i\n", ft_putunsigned(9834756));
	printf("%u\n", 9834756);
	printf("%x\n", -8888);
	printf(" %i\n", ft_puthex(-8888, 'x'));
	printf("Address: %p\n", (void *)ptr);
	printf(" <- Address %i\n", ft_putptr(ptr));

	//testing ft_printf;
	printf(" %i\n", ft_putstr("hola"));
	printf("%s\n", "hola");
	printf(" %i\n", ft_putnbr(9385745));
	printf("%i\n", 9385745);
	printf("%d\n", 9385745);
	printf(" %i\n", ft_putunsigned(9834756));
	printf("%u\n", 9834756);
	printf("%x\n", -8888);
	printf(" %i\n", ft_puthex(-8888, 'x'));
	printf("Address: %p\n", (void *)ptr);
	printf(" <- Address %i\n", ft_putptr(ptr));

	//paco tests
	ft_printf(" %c %c %c\n", '0', 0, '1');
	printf(" %c %c %c\n", '0', 0, '1');
	ft_printf(" NULL %s NULL \n", NULL);
	printf(" NULL %s NULL \n", (char *)NULL);
	ft_printf(" %p %p\n", 0, 0);
	printf(" %p %p\n", (void *)0, (void *)0);
	ft_printf(" %d\n", 0);
	printf(" %d\n", 0);
	ft_printf(" %%");
	printf(" %%");

	return (0);
}