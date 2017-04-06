/*
** Created by Pierre-Marie Danieau
**
** The following functions are used to print 
** characters on the standard output (1)
**
** Started the 06-04-2017
*/

#include	"print.h"

int		std_put_char(char c)
{
  return (fd_put_char(1, c));
}

int		std_putstr(char *str)
{
  return (fd_putstr(1, str));
}

int		std_put_nbr(int nb)
{
  return (fd_put_nbr(1, nb));
}

int		std_fast_printf(char *str, ...)
{
  va_list	args;
  int		p;
  
  p = fd_fast_printf(1, str, args);
  va_end(args);
  return (p);
}
