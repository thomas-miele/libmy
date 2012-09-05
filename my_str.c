/*
** my_str.c for libmy in /home/miele_t//GitHub/libmy
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep  5 10:56:04 2012 thomas miele
** Last update Wed Sep  5 10:57:09 2012 thomas miele
*/

#include "libmy.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *s)
{
  int	len;

  len = 0;
  while (s[len] != '\0')
    len++;
  return (len);
}


void	my_putstr(char *s)
{
  write(1, s, my_strlen(s));
}
