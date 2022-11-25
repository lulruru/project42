#include "ft_printf.h"

int	ft_putnbr_base(int n, char *base)
{
	long int	modulo;
	long int	division;
	long int	longnb;
	int			lenbase;
	static int	i;

	longnb = n;
	lenbase = ft_strlen(base);
	if (longnb < 0)
	{
		longnb *= (-1);
		ft_putchar('-');
		i++;
	}
	division = longnb / lenbase;
	modulo = longnb % lenbase;
	if (division != 0)
	{
		ft_putnbr_base(division, base);
		i++;
	}
	write(1, &base[modulo], 1);
	return (i);
}