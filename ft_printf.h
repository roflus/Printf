#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int				ft_printf(const char *format, ...);
unsigned int	ft_uiputnbr(unsigned long nb);
unsigned int	ft_putnbrbase(unsigned long long nb);
unsigned int	ft_putnbrbaseup(unsigned long long nb);
int				ft_lenghtbase(unsigned long long nb);
int				ft_lenght(unsigned int nb);

#endif