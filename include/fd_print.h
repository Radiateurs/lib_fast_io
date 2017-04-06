/*
** Created by Pierre-Marie Danieau
**
** Header for fd_print.c functions
**
** Started the 06-04-2017
*/

#ifndef		__FD_PRINT_H__
# define	__FD_PRINT_H__

# include	<unistd.h>
# include	<stdarg.h>

int		fd_put_char(int fd, char c);
/*
** Purpose :
** Print a char on the fd
**
** Returns : 
** Number of char printed
**
** Argument : 
** int fd is the file descriptor used to print
** char c is the char to print
*/

int		fd_put_str(int fd, char *str);
/*
** Purpose :
** Print a string on the fd
**
** Returns :
** Number of char printed
**
** Argument :
** int fd is the file descriptor used to print
** char *str is the string to print. Can be NULL, or empty but should ends with '\0' if allocated. 
*/

int		fd_put_nbr(int fd, int nb);
/*
** Purpose :
** Print an integer on the fd
**
** Returns :
** Number of char printed
** 
** Argument :
** int fd is the file descriptor used to print
** int nb is the number to print. Can be negative or equal to zero.
*/

int		fd_fast_printf(int fd, char *format, ...);
/*
** Purpose :
** Same behavior as printf (see 'man 3 printf')
** Print the va_args list on the fd
**
** Returns :
** Number of char printed
**
** Argument :
** int fd is the file descriptor used to print
** char *format is the formated string that allow to print any implemented type :
** %c		-> print a char
** %s		-> print a string
** %i		-> print an integer
*/

#endif		/* __FD_PRINT_H__ */
