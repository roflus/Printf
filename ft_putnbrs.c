#include "ft_printf.h"
#include "libft.h"
unsigned int	ft_uiputnbr(unsigned long nb)
{
	if (nb >= 10)
	{
		ft_uiputnbr(nb / 10);
		ft_uiputnbr(nb % 10);
	}
	else
	{
		ft_putchar_fd(nb + '0', 1);
	}
	return (ft_lenght(nb));
}

unsigned int	ft_putnbrbase(unsigned long long nb)
{
	char	*symbols;

	symbols = "0123456789abcdef";
	if (nb > 15)
	{
		ft_putnbrbase(nb / 16);
		ft_putnbrbase(nb % 16);
	}
	else
		ft_putchar_fd(symbols[nb % 16], 1);
	return (ft_lenghtbase(nb));
}

unsigned int	ft_putnbrbaseup(unsigned long long nb)
{
	char	*symbols;

	symbols = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_putnbrbaseup(nb / 16);
		ft_putnbrbaseup(nb % 16);
	}
	else
		ft_putchar_fd(symbols[nb % 16], 1);
	return (ft_lenghtbase(nb));
}
