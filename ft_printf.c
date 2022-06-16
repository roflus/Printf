#include "ft_printf.h"
#include "libft.h"

static void	ft_case(const char *format, int *i, int *k, va_list *arguments)
{
	if (format[*k] == 's')
		*i += ft_putstr_fd(va_arg(*arguments, char *), 1);
	if (format[*k] == 'd')
		*i += ft_putnbr_fd(va_arg(*arguments, int), 1);
	if (format[*k] == 'c')
		*i += ft_putchar_fd(va_arg(*arguments, int), 1);
	if (format[*k] == 'i')
		*i += ft_putnbr_fd(va_arg(*arguments, int), 1);
	if (format[*k] == 'u')
		*i += ft_uiputnbr(va_arg(*arguments, unsigned int));
	if (format[*k] == '%')
		*i += ft_putchar_fd(format[*k], 1);
	if (format[*k] == 'X')
		*i += ft_putnbrbaseup(va_arg(*arguments, unsigned int));
	if (format[*k] == 'x')
		*i += ft_putnbrbase(va_arg(*arguments, unsigned int));
	if (format[*k] == 'p')
	{
		*i += write(1, "0x", 2);
		*i += ft_putnbrbase(va_arg(*arguments, unsigned long long));
	}
}

int	ft_printf(const char *format, ...)
{
	int		k;
	int		i;
	va_list	arguments;

	va_start(arguments, format);
	k = 0;
	i = 0;
	while (format[k] != '\0')
	{
		if (format[k] != '%')
		{
			ft_putchar_fd(format[k], 1);
			i++;
		}
		if (format[k] == '%')
		{
			k++;
			ft_case(format, &i, &k, &arguments);
		}
		k++;
	}
	va_end(arguments);
	return (i);
}
