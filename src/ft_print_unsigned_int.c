/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:05:08 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 09:31:09 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Print a unsigned int to standard ouput and returns the number length
 */

int	ft_print_unsigned_int(va_list args)
{
	unsigned int	nbr;

	nbr = va_arg(args, unsigned int);
	return (ft_putnbr_unsigned(nbr));
}
