/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:42:09 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 09:43:05 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Given a variadic argument list, call a function to print
 * the value to standard output.
 * Return the size of the given number.
 * Libft functions used:
 *  - ft_strcmp
 */

int	ft_print_hexa(va_list args, char *upper)
{
	unsigned int	nbr;

	nbr = va_arg(args, size_t);
	if (ft_strcmp(upper, UPPER_HEXA) == 0)
		ft_putnbr_hexa((unsigned int)nbr, UPPER_SEQUENCE);
	else
		ft_putnbr_hexa((unsigned int)nbr, LOWER_SEQUENCE);
	return ((int) ft_num_len((unsigned int)nbr, 16, REGULAR));
}
