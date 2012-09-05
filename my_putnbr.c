/*
** my_putnbr.c for libmy in /home/miele_t//GitHub/libmy
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep  5 11:00:12 2012 thomas miele
** Last update Wed Sep  5 11:03:58 2012 thomas miele
*/

#include "libmy.h"

void	my_putnbr(int nb)
{
  int	modulo;

  modulo = 0;
  if (nb <= 9 && nb >= 0)
    my_putchar(nb + '0');
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (- 1);
      if (nb <= 9 && nb >=0)
        my_putnbr(nb);
    }
  if (nb > 9)
    {
      modulo = nb % 10;
      my_putnbr(nb / 10);
      my_putchar(modulo + '0');
    }
}
