/*
** libmy.h for libmy in /home/miele_t//GitHub/libmy
** 
** Made by thomas miele
** Login   <miele_t@epitech.net>
** 
** Started on  Wed Sep  5 10:52:02 2012 thomas miele
** Last update Wed Sep  5 11:02:53 2012 thomas miele
*/

#ifndef		LIBMY_H__
#define		LIBMY_H__

#include <stdarg.h>

void	my_putchar(char);
void	my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
void	my_putnbr(int);
int	my_strcmp(char *, char*);

void	my_flag(const char *, int, va_list);
int	my_printf(const char *, ...);

#endif		/* !LIBMY_H__*/
