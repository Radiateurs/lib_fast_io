/*
** Created by Pierre-Marie Danieau
**
** Header for print.c functions
**
** Started the 06-04-2017
*/

#ifndef		__PRINT_H__
# define	__PRINT_H__

# include	"fd_print.h"

int		std_put_char(char c);
/*
** Purpose :
** Print a char on the standard output fd (1)
**
** Returns : 
** Number of char printed
**
** Argument : 
** char c is the char to print
*/

int		std_put_str(char *str);
/*
** Purpose :
** Print a string on the standard output fd (1)
**
** Returns :
** Number of char printed
**
** Argument :
** char *str is the string to print. Can be NULL, or empty but should ends with '\0' if allocated. 
*/

int		std_put_nbr(int nb);
/*
** Purpose :
** Print an integer on the standard output fd (1)
**
** Returns :
** Number of char printed
** 
** Argument :
** int nb is the number to print. Can be negative or equal to zero.
*/

int		std_fast_printf(char *format, ...);
/*
** Purpose :
** Same behavior as printf (see 'man 3 printf')
** Print the va_args list on the standard output fd (1)
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

#endif		/* __PRINT_H__ */
