
#include "printf.h"
//allowed functions: malloc, free, write, va_start, va_arg, va_copy, va_end

//va_start initialize everything
//va_arg access to the arguments of the variadic function.
//Each time va_arg is called, you move to the next argument.
//va_arg(va_list args, type) //will take arg and type of arg.
//va_end will free the allocated memory 
static void aux_function(va_list args, char *s, size_t i)
{
	if(*s == 'c')

	else if(*s == 's')

	else if(*s == 'p')

	else if(*s == 'd')

	else if(*s == 'i')

	else if(*s == 'u')

	else if(*s == 'x')

	else if(*s == 'X')

	else if(*s == '%')

}
int	ft_printf(char const *s, ...) 
{
	va_list	args;
	size_t	i;

	if (!s)
		return(0);
	i = 0;
	va_start(args, s); //initialize everything
	while(*s)
	{
		if (*s == '%')
		{
			s++;
			aux_function(args, s, i);
		}
		else
			ft_putchar(*s, i);
		s++;
	}
	va_end(args);
	return (i);
}

int	main(void)
{
	// TYPES OF VARIABLES:
	// char				c;
	// char				*s;
	// void				*p;
	// int				d;
	// int				i;
	// unsigned int		u;
	// int				x;
	// int				X;
	//check how to print %;

	ft_printf("the argument %c, %s", 'c', "hola");

	return(0);
}
