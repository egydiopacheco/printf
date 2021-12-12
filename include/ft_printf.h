/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:15:19 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 02:00:37 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# define REGULAR "regular"
# define POINTER "pointer"
# define STD_OUTPUT 1
# define UPPER_HEXA "UPPER"
# define UPPER_SEQUENCE "0123456789ABCDEF"
# define LOWER_SEQUENCE "0123456789abcdef"
# define S_STRING 's'
# define P_POINTER 'p'
# define D_DECIMAL 'd'
# define I_INTEGER 'i'
# define U_UNSIGNED_INT 'u'
# define X_UPPER_HEXA 'X'
# define X_LOWER_HEXA 'x'
# define C_CHARACTER 'c'
# define NIL_MSG "(nil)"
# define NULL_MSG "(null)"
# define POINTER_HEAD "0x"

int		ft_printf(const char *str, ...);
int		ft_print_string(va_list args);
int		ft_print_char(va_list args);
int		ft_print_pointer(va_list args);
int		ft_print_unsigned_int(va_list args);
int		ft_print_p_symbol(void);
int		ft_print_integer(va_list args);
int		ft_print_hexa(va_list args, char *upper);
int		ft_num_len(long long int nb, int base, char *flag);
int		ft_num_len_unsigned(unsigned long long int nb, int base, char *flag);
int		ft_putnbr_unsigned(unsigned int nb);
void	ft_putnbr_hexa(unsigned long long nbr, const char *base);

#endif
