/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p_symbol.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:38:32 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/11 16:39:09 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Prints the % symbol to standard output anda return it's size.
 * Libft functions used:
 *  - ft_putchar_fd
 */

int	ft_print_p_symbol(void)
{
	ft_putchar_fd('%', STD_OUTPUT);
	return (1);
}
