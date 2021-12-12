/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:39:25 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 01:34:51 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Print an integer to standard output and return it's size
 * Libft functions used:
 *  - ft_putnbr_fd
 */

int	ft_print_integer(va_list args)
{
	int	nbr;

	nbr = va_arg(args, int);
	ft_putnbr_fd(nbr, STD_OUTPUT);
	return (ft_num_len(nbr, 10, REGULAR));
}
