/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 06:21:34 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 09:47:26 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static inline void	parse_flags(char flag, va_list args, int *print_size);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		print_size;
	int		pos;

	pos = 0;
	print_size = 0;
	va_start(args, str);
	while (*(str + pos))
	{
		if (*(str + pos) == '%')
			parse_flags(*(str + ++pos), args, &print_size);
		else
		{
			write(1, &*(str + pos), STD_OUTPUT);
			print_size++;
		}
		pos++;
	}
	return (print_size);
}

static inline void	parse_flags(char flag, va_list args, int *print_size)
{
	int	increment;

	increment = 0;
	if (flag == C_CHARACTER)
		increment = ft_print_char(args);
	else if (flag == S_STRING)
		increment = ft_print_string(args);
	else if (flag == P_POINTER)
		increment = ft_print_pointer(args);
	else if (flag == D_DECIMAL || flag == I_INTEGER)
		increment = ft_print_integer(args);
	else if (flag == U_UNSIGNED_INT)
		increment = ft_print_unsigned_int(args);
	else if (flag == X_LOWER_HEXA)
		increment = ft_print_hexa(args, "");
	else if (flag == X_UPPER_HEXA)
		increment = ft_print_hexa(args, UPPER_HEXA);
	else if (flag == '%')
		increment = ft_print_p_symbol();
	else
		increment = -1;
	*print_size += increment;
	va_end(args);
}
