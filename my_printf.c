/*
** my_printf.c for libmy in /home/miele_t//GitHub/libmy
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep  5 10:53:06 2012 thomas miele
** Last update Wed Sep  5 10:53:07 2012 thomas miele
*/

#include "libmy.h"

void	my_flag(const char *fmt, int i, va_list ap)
{
  if (fmt[i] == 'd')
    my_putnbr(va_arg(ap, int));
  else if (fmt[i] == 'c')
    my_putchar(va_arg(ap, int));
  else if (fmt[i] == 's')
    my_putstr(va_arg(ap, char *));
  else
    my_putchar(fmt[i]);
}

int	my_printf(const char *fmt, ...)
{
  va_list ap;
  int	i;

  i = 0;
  va_start(ap, fmt);
  while (fmt[i] != '\0')
    {
      if (fmt[i] == '%')
	{
          i++;
          my_flag(fmt, i, ap);
	}
      else
	my_putchar(fmt[i]);
      i++;
    }
  va_end(ap);
  return (0);
}
