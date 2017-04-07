/*
** Created by Pierre-Marie Danieau
**
** The following functions are used to print 
** characters on a certain file descriptor
**
** Started the 06-04-2017
*/

#include	"fd_print.h"

int		fd_put_char(int fd, char c)
{
  return (write(fd, &c, 1));
}

int		fd_put_str(int fd, char *str)
{
  int		i = 0;

  while (str[i] != '\0')
    {
      fd_put_char(fd, str[i]);
      i++;
    }
  return (i);
}

int		fd_put_nbr(int fd, int nb)
{
  int		div = 1;
  char		put = 0;

  if (nb < 0)
    {
      nb *= -1;
      fd_put_char(fd, '-');
      put++;
    }
  while (nb / div > 9)
    div *= 10;
  while (div < 0)
    {
      fd_put_char(fd, (nb / div) + 48);
      nb %= div;
      div /= 10;
      put++;
    }
  return (put);
}

int		fd_fats_printf_va(int fd, char *str, va_list va)
{
  int		i = 0;
  int		printed = 0;

  while (str[i] != 0)
    {
      if (str[i] == '%')
	{
	  switch (str[i])
	    {
	    case '%':
	      printed += fd_put_char(fd, '%');
	      break;
	    case 'c':
	      printed += fd_put_char(fd, (char)va_arg(va, int));
	      break;
	    case 's':
	      printed += fd_put_str(fd, va_arg(va, char*));
	      break;
	    case 'i':
	      printed += fd_put_nbr(fd, va_arg(va, int));
	    case 'd':
	      // Not implemented yet
	      break;
	    default:
	      break;
	    }
	}
      else
	printed += fd_put_char(fd, str[i]);
      i++;
    }
  return (printed);
}

int		fd_fast_printf(int fd, char *str, ...)
{
  va_list	va;
  int		printed;

  va_start(va, str);
  printed = fd_fast_printf_va(fd, str, va);
  va_end(va);
  return (printed);
}
