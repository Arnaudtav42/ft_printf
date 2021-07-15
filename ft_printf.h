#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_printf
{
	va_list	args;
	int		returnvalue;
}				t_printf;

int		ft_printf(const char *format, ...);
int		ft_is_type(const char c);
void	ft_write_hexap(unsigned long long arg, int base, t_printf *env);
void	ft_putnbr_base(long long arg, int base, t_printf *env);
void	ft_write_int(long long arg, int base, t_printf *env, char c);
void	ft_write_hexa(unsigned int arg, int base, t_printf *env);
void	ft_putchar(char c, t_printf *env);
void	ft_putstr(char *str, t_printf *env);
void	ft_write_uphexa(unsigned int arg, int base, t_printf *env);
void	ft_parse_format(const char *format, t_printf *env);
void	ft_conv(const char c, t_printf *env);
void	ft_init_struct(t_printf *env);

#endif
