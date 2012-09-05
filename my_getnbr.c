/*
** my_getnbr.c for libmy in /home/miele_t//GitHub/libmy
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep  5 10:59:06 2012 thomas miele
** Last update Wed Sep  5 11:00:04 2012 thomas miele
*/

#include "libmy.h"

int	my_getnbr(char *s)
{
  int	pos;
  int	signe;
  int	nb;

  signe = 1;
  pos = 0;
  while (s[pos] != '\0' && (s[pos] == '+' || s[pos] == '-'))
    {
      if (s[pos] == '-')
	{
	  signe = signe * (- 1);
	}
      pos = pos + 1;
    }
  s = s + pos;
  nb = 0;
  pos = 0;
  while (s[pos] >= '0' && s[pos] <= '9')
    {
      nb = nb * 10;
      nb = nb - (s[pos] - '0');
      pos = pos + 1;
    }
  return (nb * signe * (-1));
}
