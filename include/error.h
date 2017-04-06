/*
** Created by Pierre-Marie Danieau
**
** Header for error.c functions
**
** Started the 06-04-2017
*/

#ifndef		__ERROR_H__
# define	__ERROR_H__

# include	"fd_print.h"

int		err_put_char(char c);
/*
** Purpose :
** Print a char on the error fd (2)
**
** Returns : 
** Number of char printed
**
** Argument : 
** char c is the char to print
*/

int		err_put_str(char *str);
/*
** Purpose :
** Print a string on the error fd (2)
**
** Returns :
** Number of char printed
**
** Argument :
** char *str is the string to print. Can be NULL, or empty but should ends with '\0' if allocated. 
*/

int		err_put_nbr(int nb);
/*
** Purpose :
** Print an integer on the error fd (2)
**
** Returns :
** Number of char printed
** 
** Argument :
** int nb is the number to print. Can be negative or equal to zero.
*/

int		err_fast_printf(char *format, ...);
/*
** Purpose :
** Same behavior as printf (see 'man 3 printf')
** Print the va_args list on the error fd (2)
**
** Returns :
** Number of char printed
**
** Argument :
** char *format is the formated string that allow to print any implemented type :
** %c		-> print a char
** %s		-> print a string
** %i		-> print an integer
*/

#endif		/* __ERROR_H__ */
