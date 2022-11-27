#include "ft_printf.h"

int	ft_lennmbr(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 16;
	}
	return (i);
}

void	ft_putnbr_base(unsigned int n, char *base)
{
	long int	modulo;
	long int	division;
	long int	longnb;

	longnb = n;
	division = longnb / 16;
	modulo = longnb % 16;
	if (division != 0)
	{
		ft_putnbr_base(division, base);
	}
	ft_putchar(base[modulo]);
}

int ft_putnbr_hex(unsigned int n, char *base)
{
	int	len;

	len = 0;
	if (n == 0)
		return(write(1, "0", 1));
	else
		ft_putnbr_base(n, base);
	len += ft_lennmbr(n);
	return (len);


}