/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:37:24 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/10 20:21:15 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(va_list args)
{
	const int	pointer_head = 2;
	size_t		nbr;

	nbr = va_arg(args, size_t);
	if (nbr == 0)
	{
		ft_putstr_fd(NIL_MSG, 1);
		return (5);
	}
	ft_putstr_fd(POINTER_HEAD, 1);
	ft_putnbr_hexa(nbr, LOWER_SEQUENCE);
	return (ft_num_len(nbr, 16, POINTER) + pointer_head);
}
