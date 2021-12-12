/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:45:27 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 09:29:55 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Print to standard output the value of a hexadecimal, in a given base
 * Libft functions used:
 *  - ft_putchar_fd
 */

void	ft_putnbr_hexa(unsigned long long nbr, const char *base)
{
	if (nbr >= 16)
		ft_putnbr_hexa(nbr / 16, base);
	ft_putchar_fd(base[nbr % 16], STD_OUTPUT);
}
