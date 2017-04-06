/*
** Created by Pierre-Marie Danieau
**
** The following functions are used to print 
** characters on the standard error output (2)
**
** Started the 06-04-2017
*/

#include	"error.h"

int		err_put_char(char c)
{
  return (fd_put_char(2, c));
}

int		err_put_str(char *str)
{
  return (fd_put_str(2, str));
}

int		err_put_nbr(int nb)
{
  return (fd_put_nbr(2,nb));
}

int		err_fast_printf(char *str, ...)
{
  va_list	args;
  int		p;
  
  p = fd_fast_printf(2, str, args);
  va_end(args);
  return (p);
}
