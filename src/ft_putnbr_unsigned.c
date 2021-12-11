/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 01:21:02 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/10 19:10:41 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 *
 */

int	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb <= 9)
	{
		ft_putchar_fd(nb + '0', 1);
	}
	if (nb > 9)
	{
		ft_putnbr_unsigned(nb / 10);
		ft_putnbr_unsigned(nb % 10);
	}
	return (ft_num_len(nb, 10, REGULAR));
}
