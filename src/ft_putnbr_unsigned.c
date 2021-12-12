/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 01:21:02 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 09:28:45 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Print to standard output the value of an unsigned int
 * Libft functions used:
 *  - ft_putchar_fd
 */

int	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb <= 9)
	{
		ft_putchar_fd((char)nb + '0', STD_OUTPUT);
	}
	if (nb > 9)
	{
		ft_putnbr_unsigned(nb / 10);
		ft_putnbr_unsigned(nb % 10);
	}
	return (ft_num_len(nb, 10, REGULAR));
}
