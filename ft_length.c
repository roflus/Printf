#include "ft_printf.h"
int	ft_lenght(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_lenghtbase(unsigned long long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}
