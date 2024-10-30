
#include "printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_fd(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
long	ft_len(long n) //auxiliar putnbr
{
	long	num;
	long	counter;
	long	dividend;
	long	i;

	num = n;
	counter = 0;
	dividend = 1;
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	i = 1;
	while (i < counter)
	{
		dividend *= 10;
		counter --;
	}
	return (dividend);
}
void	ft_putnbr(int n) //revisar funcion
{
	long	dividend;
	char	quotient;
	
	n = (long)n;
	if(n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 0)
		dividend = ft_len(n);
	while (dividend != 0)
	{
		quotient = (n / dividend) + '0';
		write(1, &quotient, 1);
		n = n % dividend;
		dividend = dividend / 10;
	}
}
