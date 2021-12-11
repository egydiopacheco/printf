/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:36:28 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/10 19:09:42 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 *
 */

int	ft_print_string(va_list args)
{
	char	*str;
	size_t	i;

	str = va_arg(args, char *);
	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd(NULL_MSG, 1);
		return (6);
	}
	while (str && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	if (str)
		return (ft_strlen(str));
	return (0);
}
