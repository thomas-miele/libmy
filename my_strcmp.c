/*
** my_strcmp.c for libmy in /home/miele_t//GitHub/libmy
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep  5 10:54:08 2012 thomas miele
** Last update Wed Sep  5 11:03:11 2012 thomas miele
*/

#include "libmy.h"

/*
** Be careful : my_strcmp return 0 if s1 != s2 and 1 if s1 == s2
*/

int	my_strcmp(char *s1, char *s2)
{
  int	res;
  int	i;
  int	l1;
  int	l2;

  res = 0;
  i = 0;
  l1 = my_strlen(s1);
  l2 = my_strlen(s2);
  while (s1[i] && s2[i])
    {
      if (s1[i] == s2[i])
        res++;
      i++;
    }
  if (res == l2)
    return (1);
  else
    return (0);
}
