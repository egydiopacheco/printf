/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:58:37 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/10 19:08:44 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Receives a flag, if it is a pointer, return 1 as size.
 * If it is a regular, calculate the size of the number (nb)
 * Libft functions used : 
 * - ft_strcmp;
 */

int	ft_num_len(long long int nb, int base, char *flag)
{
	int	size;

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
		nb = nb / base;
		size++;
	}
	return (size);
}
