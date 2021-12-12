/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len_unsigned.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:37:17 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 09:16:52 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Receives a flag, if it is a pointer, return 1 as size.
 * If it is a regular, calculate the size of the number (nb)
 * Libft functions used :
 * - ft_strcmp;
 */

int	ft_num_len_unsigned(unsigned long long int nb, int base, char *flag)
{
	size_t	size;

	size = 0;
	if (nb == 0 && ft_strcmp(flag, POINTER) == 0)
		return (1);
	else if (nb <= 0 && ft_strcmp(flag, REGULAR) == 0)
	{
		size++;
		nb = -nb;
	}
	while (nb)
	{
		nb = nb / (unsigned int)base;
		size++;
	}
	return ((int)size);
}
