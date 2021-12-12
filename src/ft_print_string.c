/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:36:28 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/12 12:06:44 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * Given a variadic list, print to the standard output the content of a string
 * and return it's length
 * Libft functions used:
 *  - ft_strlen
 *  - ft_putstr_fd
 */

int	ft_print_string(va_list args)
{
	char	*str;
	size_t	i;

	str = va_arg(args, char *);
	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd(NULL_MSG, STD_OUTPUT);
		return (ft_strlen(NULL_MSG));
	}
	while (str && *(str + i))
	{
		write(1, &*(str + i), STD_OUTPUT);
		i++;
	}
	if (str)
		return ((int)ft_strlen(str));
	return (0);
}
