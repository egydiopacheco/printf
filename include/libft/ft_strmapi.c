/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:36:04 by epacheco          #+#    #+#             */
/*   Updated: 2021/12/11 18:35:49 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		j;
	int		size;

	j = 0;
	size = (int)ft_strlen(s);
	if (!f || !s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ((unsigned int)size + 1));
	if (!str)
		return (NULL);
	while (j < size)
	{
		*(str + j) = f((unsigned int)j, *(s + j));
		j++;
	}
	*(str + j) = '\0';
	return (str);
}
