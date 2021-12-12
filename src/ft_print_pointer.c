/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:37:24 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 12:13:42 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Given a variadic list print to the standard output the pointer address
 * and return it's length;
 * Libft functions used: 
 *  - ft_putstr_fd
 */

int	ft_print_pointer(va_list args)
{
	const int	pointer_head = 2;
	size_t		nbr;

	nbr = va_arg(args, size_t);
	if (nbr == 0)
	{
		ft_putstr_fd(NIL_MSG, STD_OUTPUT);
		return (ft_strlen(NIL_MSG));
	}
	ft_putstr_fd(POINTER_HEAD, STD_OUTPUT);
	ft_putnbr_hexa((unsigned long long)nbr, LOWER_SEQUENCE);
	if (nbr >= 0)
		return (ft_num_len_unsigned(nbr, 16, POINTER) + (int)pointer_head);
	else
		return (ft_num_len((long long)nbr, 16, POINTER) + (int)pointer_head);
}
