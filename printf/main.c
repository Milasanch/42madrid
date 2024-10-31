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
	printf(" %i\n", ft_puthex(-8888, 'x'));//Icheck protections
	printf("Address: %p\n", (void *)ptr);
	printf(" <- Address %i\n", ft_putptr(ptr));
	return (0);
}